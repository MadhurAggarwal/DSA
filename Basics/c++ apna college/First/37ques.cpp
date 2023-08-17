#include <iostream>
using namespace std;
//kickstarter record breaking days problem...
//medium
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    int y=0, max=-1;
    for(int i=0; i<n; i++)
    if(a[i]>max)
    {max=a[i];
    if(i==n-1||a[i]>a[i+1]) y++;}
    
    cout<<y;
    return 0;
}