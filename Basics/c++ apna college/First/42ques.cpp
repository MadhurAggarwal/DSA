#include <iostream>
using namespace std;
// maximum subarray sum...
//brute force O(n3)
//Theory, basics

int main()
{int n;
cin>>n;
int a[n];
for (int i=0; i<n; i++)
cin>>a[i];

    //Method#1: Brute Force
    int sum=0, max=a[0];
    for(int start=0; start<n; start++)
    {for(int end=start; end<n; end++)
        {for(int i=start; i<=end; i++)
        sum+=a[i];
        if(max<sum) max=sum;
        sum=0;}
    }
    cout<<max; 

return 0;
}