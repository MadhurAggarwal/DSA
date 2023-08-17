#include <iostream>
using namespace std;
//rat in a maze problem, backtracking:

bool issafe(bool**arr, int x, int y, int n)
{if(x<n&&y<n&&arr[x][y]) return 1;
else return 0;
}

bool ratinamaze(bool**arr,bool**ans,int x, int y, int  n)
{if(x==n-1&&y==n-1) {ans[x][y]=1; return 1;}    //return without any recursion on reaching (n-1,n-1)
if(issafe(arr,x,y,n))                           //check if current position is valid or not
    {ans[x][y]=1;
    if (ratinamaze(arr,ans,x+1,y,n)) return 1;  //check if going down gives corrrect solution
    if (ratinamaze(arr,ans,x,y+1,n)) return 1;  //else check if going right is correct
    ans[x][y]=0;                                //else backtrack out of (x,y)
    return 0;
    }
return 0;
}

int main()
{//input:
int n;
cin>>n;
//creating input array:
bool** arr=new bool*[n];
for(int i=0;i<n;i++)
arr[i]= new bool[n];
//input:
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>arr[i][j];
//creating ans array
bool **ans= new bool*[n];
for(int i=0;i<n;i++)
{ans[i]=new bool[n];
for(int j=0; j<n;j++)
ans[i][j]=0;
}
//rat in a maze
if(ratinamaze(arr,ans,0,0,n))
{for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
 cout<<ans[i][j]<<" ";
 cout<<endl;}
}
else cout<<"No solution possible";

//deleting arrays:
for(int i=0;i<n;i++)
{delete[] arr[i];
 delete[] ans[i];}
delete[] arr;
delete[] ans;
return 0;
}