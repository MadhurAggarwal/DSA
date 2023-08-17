#include <iostream>
using namespace std;
int main()
{int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0; i<n; i++)
for(int j=0; j<m; j++)
cin>>a[i][j];

cout<<a[0][1];
return 0;
}