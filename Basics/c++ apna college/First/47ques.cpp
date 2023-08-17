#include <iostream>
using namespace std;
//Pair Sum Problem
//Find a pair of array elements whose sum equals given sum.

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
int k;
cin>>k;

    //METHOD#1 Brute force: O(n2)
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
    if(a[j]+a[i]==k) cout<<a[i]<<" "<<a[j]<<endl;
    
return 0;
}