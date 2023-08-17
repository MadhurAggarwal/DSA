#include <iostream>
using namespace std;
//max till i stored in integer...

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    int max=a[0];
    for(int i=1; i<n; i++)
    {cout<<max<<" ";
    if(a[i]>max) max=a[i];
    }
    cout<<max<<endl;
    return 0;
}