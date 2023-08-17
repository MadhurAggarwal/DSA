#include <iostream>
using namespace std;
//find a number in an array where every other number exists in triplet

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

int ans=0;
int b[32]={};
for(int i=0; i<32; i++)
{for(int j=0; j<n; j++)
if(a[j]&(1<<i)) b[i]++;
if(b[i]%3) ans+= (1<<i);
}

cout<<ans;
return 0;
}