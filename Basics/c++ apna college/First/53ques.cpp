#include <iostream>
using namespace std;
//Given 2d sorted array of order n*m
//rows are sorted in the ascending order left to right
//columns are sorted in ascending order top to bottom
//find if a given value exists in the array or not

//quite difficult to get O(n), important***

int main()
{int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0; i<n; i++)
for(int j=0; j<m; j++)
cin>>a[i][j];

int x;
cin>>x;
bool flag=0;

int i=0, j=m-1;
while(i<n&&j>=0)
{if(a[i][j]==x) {flag=1; break;}
else if(a[i][j]>x) j--;
else i++;}

if(flag==1) cout<<i<<" "<<j<<endl;
else cout<<"-1";
return 0;
}
//starting at top right corner, we have 2 options go left if x is less or go down if x is more.
//or, start from the bottom the left corner, go up if less and right if more.