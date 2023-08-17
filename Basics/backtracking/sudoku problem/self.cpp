#include <iostream>
using namespace std;
#define N 9
int arr[N][N];
bool values[N][N][N+1]={};
//cannot solve all sudokus

//printing the board
void print()
{for(int i=0;i<N;i++)
 {for(int j=0;j<N;j++)
  {cout<<arr[i][j]<<" ";
  if((j+1)%3==0) cout<<" ";
  }
  cout<<endl;
  if((i+1)%3==0) cout<<endl;
 } 
}

//taking input
void input()
{for(int i=0;i<N;i++)
 for(int j=0;j<N;j++)
 cin>>arr[i][j];
}

//checking validity
bool isValid(int row, int col, int num)
{if(num<1||num>9) return 0;
//row
for(int i=0;i<N;i++)
if(arr[row][i]==num) return 0;
//column
for(int i=0;i<N;i++)
if(arr[i][col]==num) return 0;
//box
int row_start= row- row%3;
int col_start= col- col%3;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
if(arr[i+row_start][j+col_start]==num) return 0;
//else
return 1;
}

//mark the possible values
void adjust()
{for(int i=0;i<N;i++)
 for(int j=0;j<N;j++)
 {if(arr[i][j]==0)
    {for(int k=1;k<=N;k++)
    values[i][j][k]=isValid(i,j,k);
    }
 else 
    {for(int k=1;k<=N;k++) values[i][j][k]=0;
    values[i][j][arr[i][j]]=1;
    }
 }
}

int onlyonevalue(int i,int j)
{int x=0,y=0;
 for(int k=1;k<=N;k++)
 if(values[i][j][k]) {x++; y=k;}
 if(x==1) return y;
 else return 0;
}

void solve()
{int a=0,b=0;
 for(int i=0;i<N;i++)
 for(int j=0;j<N;j++)
 if(arr[i][j]==0) b++;

 while(b)
 {next: adjust();
  for(int i=0;i<N;i++)
  for(int j=0;j<N;j++)
  {if(arr[i][j]) continue;
   a=onlyonevalue(i,j);
   if(a)
   {arr[i][j]=a;
    b--;
    cout<<"Placed "<<a<<" At "<<i<<","<<j<<". Now, b="<<b<<endl;
    goto next;
   }
  } 
 }
}

int main()
{input();
 solve();
 cout<<endl<<endl;
 print();
 return 0;
}