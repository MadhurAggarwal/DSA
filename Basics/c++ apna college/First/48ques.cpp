#include <iostream>
using namespace std;
//Pair Sum problem...
//self
int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
int k;
cin>>k;

    //Method#2 : using another array O(n)
    //works only if all array elements are positive...
    int max=a[0], half=0;
    for(int i=0; i<n; i++)
    {if(max<a[i]) max=a[i];
    if(k%2==0 && a[i]==k/2) half++;}

    bool b[max+1]={};
    for(int i=0; i<n; i++)
    b[a[i]]=1;

    for(int i=0; i<=max; i++)
    {if(i==k/2 && half==2) {cout<<i<<" "<<i<<endl; i++;}
    if(b[i]==1&&b[k-i]==1) {cout<<i<<" "<<k-i<<endl; b[i]=0;}}

return 0;
}