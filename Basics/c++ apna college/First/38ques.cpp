#include <iostream>
using namespace std;
//First repeating element...
//difficult, Important***
int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    int max=-1;
    for(int i=0; i<n; i++)
    if(max<a[i]) max=a[i];

    int i;
    int b[max+1]={};
    for(i=0; i<n; i++)
    {if(b[a[i]]==0) b[a[i]]=i+1;
    else break;}
    
    cout<<b[a[i]]-1;
    return 0;
}