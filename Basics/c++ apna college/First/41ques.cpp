#include <iostream>
using namespace std;
//print all sub-arrays...
//brute force(easy) O(n3)

int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int start=0; start<n; start++)
    {for(int end=start; end<n; end++)
    {for(int i=start; i<=end; i++)
    cout<<a[i]<<" ";
    cout<<endl;}}

    return 0;
}