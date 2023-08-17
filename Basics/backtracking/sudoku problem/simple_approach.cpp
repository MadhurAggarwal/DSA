#include <iostream>
using namespace std;
#define N 9

//printing the board
void print(int arr[N][N])
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
void input(int arr[N][N])
{for(int i=0;i<N;i++)
 for(int j=0;j<N;j++)
 cin>>arr[i][j];
}

//checking validity
bool isValid(int arr[N][N], int row, int col, int num)
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

bool solution(int arr[N][N], int row, int col)
{return 0;
}

int main()
{int arr[N][N];
 input(arr);
 if(solution(arr,0,0)) print(arr);
 else cout<<"No Solution Exists";
 return 0;
}