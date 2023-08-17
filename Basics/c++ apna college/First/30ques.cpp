#include <iostream>
using namespace std;
//Bubble sort.
//theory
//Repeatedly sort adjacent elements if they are in wrong order...
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int i=n-1; i>0; i--)
    {for(int j=0; j<i; j++)
    if(a[j]>a[j+1]) 
    {   a[j]= a[j]+a[j+1];
        a[j+1]=a[j]-a[j+1];
        a[j]= a[j]-a[j+1];
    }
    }

    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    return 0;
}