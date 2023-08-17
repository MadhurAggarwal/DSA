#include <iostream>
using namespace std;
//longest arithematic subarray...
//medium
int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

int x=2, y=a[1]-a[0], max=2;
for(int i=2; i<n; i++)
{if(a[i]-a[i-1]==y) x++;
else{y=a[i]-a[i-1];
    x=2;}
if(max<x) max=x;
}
cout<<max;
return 0;
}