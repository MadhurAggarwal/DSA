#include <iostream>
using namespace std;
//incomplete...
int main()
{int r,c;
cin>>r>>c;
int a[r][c];
for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
cin>>a[i][j];
int x;
cin>>x;

/*    //Method#1: Array traversal Brute Force: O(n2)
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    if(a[i][j]==x) cout<<i<<" "<<j<<endl;
*/

/*    //Method#2: Spiral Order Array Traversal:
    //self; incomplete...
//variables row, column keep track of number of rows and columns printed. 
int row_start=0, row_end=r-1, column_start=0, column_end=c-1, row=0, column=0;
while(column<c && row<r)
{   //vertical
    if(row<column && row_start<row_end) {cout<<a[row_start][column_start]<<" "; row_start++;}
    if(row_start==row_end) {cout<<endl; row++; row_end=}
    if(row<column && row_start>row_end) {cout<<a[row_start][column_start]<<" "; row_start--;}

    //horizontal
    if(row>=column && column_start<column_end) 
    {cout<<a[row_start][column_start]<<" "; column_start++; if(column_start==column_end) {cout<<endl; column++; column_end= }}
    if(row>=column && column_start>column_end) 
    {cout<<a[row_start][column_start]<<" "; column_start--; if(column_start==column_end) {cout<<endl; column++; column_end= 0+(row/2)}}
}
*/

/*  //Printing array O(n2)
    for(int i=0; i<r; i++)
    {for(int j=0; j<c; j++)
    cout<<a[i][j]<<" ";
    cout<<endl;}
*/
return 0;
}