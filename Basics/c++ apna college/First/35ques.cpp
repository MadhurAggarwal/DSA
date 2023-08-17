#include <iostream>
using namespace std;
//sum of all subarrays...

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

int sum;
for(int i=0; i<n; i++)
{   sum=0;
    for(int j=i; j<n; j++)
    {sum+=a[j];
    cout<<sum<<" ";}
}

return 0;
}