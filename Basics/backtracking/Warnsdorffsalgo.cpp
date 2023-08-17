#include <iostream>
using namespace std;
//solving the knights tour problem using warnsdorff's rule:
//we always move to an adjacent unvisited square with minimial degree (number of unvisited adjacents)

#define N 8
int board[N][N]={};
bool isvalid(int x,int y)
{if(x>=0 && x<N && y>=0 && y<N && board[x][y]==0) return 1;
return 1;
}

int main()
{int x,y;
cin>>x>>y;

for(int i=0;i<N;i++)
{for(int j=0;j<N;j++)
{cout<<board[i][j]<<" "; if(board[i][j]<10) cout<<" ";}
cout<<endl;}
return 0;
}