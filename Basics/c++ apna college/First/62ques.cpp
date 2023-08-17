#include <iostream>
using namespace std;
//finding a unique number in an array where every number except this number appears twice
int main()
{int n; 
cin>>n;
int a[n];
cin>>a[0];
int ans=a[0];
for(int i=1; i<n; i++)
{cin>>a[i];
ans= ans^a[i];}
cout<<ans;
return 0;
}