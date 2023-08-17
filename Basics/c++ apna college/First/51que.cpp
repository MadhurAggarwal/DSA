#include <iostream>
using namespace std;
//Transpose of a square matrix
//easy
int main()
{int n;
cin>>n;
int a[n][n];
for(int i=0; i<n; i++)
for(int j=0; j<n; j++)
cin>>a[i][j];

//j begins with i+1 not 0 so that we are swapping only elements in the upper triangle.
//if we swap all elements then in total zero effect.
for(int i=0; i<n; i++)
for(int j=i+1; j<n; j++)
{   a[i][j]= a[i][j]+ a[j][i];
    a[j][i]= a[i][j]- a[j][i];
    a[i][j]= a[i][j]- a[j][i];
}

for(int i=0; i<n; i++)
{for(int j=0; j<n; j++)
cout<<a[i][j]<<" ";       //if we just want to print transpose then swap(i,j) in this equation.
cout<<endl;}

return 0;
}