#include <iostream>
using namespace std;
//insertion sort self...
//theory
//take an element and place it in correct position in the array before it...

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int i=1; i<n; i++)
    {if(a[i]<a[i-1])
    {   int j,x=a[i];
        for(j=i-1; j>=0; j--) 
        {if(a[j]>x) a[j+1]=a[j];
        else break;}
        a[j+1]=x;
    }
    }
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";    
    return 0;
}