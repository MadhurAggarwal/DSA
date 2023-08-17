#include <iostream>
using namespace std;
//a knight moves like usual on a chess board;
//starting from any initial position, knight has to reach every position on board exactly once
//this code does not works for some initial positions as it is highly inefficient
#define N 8

int board[N][N]={};
bool isvalid(int x,int y)
{if(x<N && x>=0 && y<N && y>=0 && board[x][y]==0) return 1;
return 0;
}

int knightstour(int x, int y, int move)
{if(move==65) return 1;
if(isvalid(x,y))
    {board[x][y]=move;
    if (knightstour(x+2,y+1,move+1)) return 1;
    if (knightstour(x+1,y+2,move+1)) return 1;
    if (knightstour(x-1,y+2,move+1)) return 1;
    if (knightstour(x-2,y+1,move+1)) return 1;
    if (knightstour(x-2,y-1,move+1)) return 1;
    if (knightstour(x-1,y-2,move+1)) return 1;
    if (knightstour(x+1,y-2,move+1)) return 1;
    if (knightstour(x+2,y-1,move+1)) return 1;
    board[x][y]=0;
    return 0;
    }
return 0;
}

int main()
{int i,j;
cin>>i>>j;
knightstour(i,j,1);
for(int a=0;a<N;a++)
{for(int b=0;b<N;b++)
{cout<<board[a][b]<<" ";if(board[a][b]<10) cout<<" ";}
cout<<endl;}
return 0;
}