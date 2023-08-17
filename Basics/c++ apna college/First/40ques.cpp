#include <iostream>
using namespace std;
//smallest positive missing number
//medium

int main()
{//input
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

//find max element in the array
int max=a[0];
for(int i=0; i<n; i++)
if(max<a[i]) max=a[i];

//output special case
if(max<1) {cout<<1; return 0;}

//store present positive integers in array b
bool b[max+1]={};
for(int i=0; i<n; i++)
if(a[i]>0) b[a[i]]=1;

//check array b
int x;
for( x=1; x<max+1; x++)
if(b[x]==0) break;

//output
if(x<max) cout<<x;
else cout<<max+1;
return 0;
}