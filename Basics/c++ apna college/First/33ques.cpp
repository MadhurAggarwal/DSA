#include <iostream>
using namespace std;
//max till i array...

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    b[0]=a[0];
    for(int i=1; i<n; i++)
    {if(a[i]>b[i-1]) b[i]=a[i];
    else b[i]=b[i-1];}

    for(int i=0; i<n; i++)
    cout<<b[i]<<" ";
    return 0;
}