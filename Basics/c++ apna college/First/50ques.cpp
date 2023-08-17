#include <iostream>
using namespace std;
//Spiral Order Array Traversal...
//theory, Important***
//time complexity is still O(n*m) so its not better than nested for loops...
int main()
{int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0; i<n; i++)
for(int j=0; j<m; j++)
cin>>a[i][j];

    int row_start=0, row_end=n-1;
    int column_start=0, column_end=m-1;
    int x=0;

    while(x<n*m)
    {//for row_start
        if(row_start<=row_end)
        {for(int i=column_start; i<=column_end; i++)
        {cout<<a[row_start][i]<<" "; x++;}
        cout<<endl;
        row_start++;}
    //for column_end
        if(column_start<=column_end)
        {for(int i=row_start; i<=row_end; i++)
        {cout<<a[i][column_end]<<" "; x++;}
        cout<<endl;
        column_end--;}
    //for row_end
        if(row_start<=row_end)
        {for(int i=column_end; i>=column_start; i--)
        {cout<<a[row_end][i]<<" "; x++;}
        cout<<endl;
        row_end--;}
    //for column_start
        if(column_start<=column_end)
        {for(int i=row_end; i>=row_start; i--)
        {cout<<a[i][column_start]<<" "; x++;}
        cout<<endl;
        column_start++;}
    }
return 0;
}