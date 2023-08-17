#include <iostream>
using namespace std;
//n queen problem
//brute force approach

void markpositions(char**arr, int n, int x, int y, char ch)
{for(int i=0;i<n;i++) {if(i==y) continue; arr[x][i]=ch;}
 for(int i=0;i<n;i++) {if(i==x) continue; arr[i][y]=ch;}
 int i,j;
 for(i=x+1,j=y+1; i<n&&j<n; i++,j++) arr[i][j]=ch;
 for(i=x-1,j=y-1; i>=0&&j>=0; i--,j--) arr[i][j]=ch;
 for(i=x+1,j=y-1; i<n&&j>=0; i++,j--) arr[i][j]=ch;
 for(i=x-1,j=y+1; i>=0&&j<n; i--,j++) arr[i][j]=ch;
}

void nqueens(char**arr,int n)
{int Q=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{if(arr[i][j]=='Q') {markpositions(arr,n,i,j,'.'); Q++;}
if(Q==n) return;}
}

int nqueenproblem(char**arr,int n,int queens, int x, int y)
{if(queens==n) return 1;
if(x>=0&&x<n&&y>=0&&y<n&&arr[x][y]=='Q')
    {markpositions(arr,n,x,y,'.');
    if(nqueenproblem(arr,n,queens+1,x+2,y+1)) return 1;
    if(nqueenproblem(arr,n,queens+1,x-2,y+1)) return 1;
    ///////incomplete////////
    markpositions(arr,n,x,y,'Q');
    return 0;
    }
return 0;
}

int main()
{//input
int n;
cin>>n;
char**arr=new char *[n];
for(int i=0;i<n;i++)
arr[i]=new char [n];

//initialisation
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
arr[i][j]='Q';

nqueens(arr,n);
//output
for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
cout<<arr[i][j]<<" ";
cout<<endl;}

//return
for(int i=0;i<n;i++)
delete[] arr[i];
delete[] arr;
return 0;
}