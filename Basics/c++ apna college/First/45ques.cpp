#include <iostream> 
using namespace std;
//Maximum Circular Subarray Sum...
//self O(n)
int main()
{int n;
cin>>n;
int a[2*n-1];
for(int i=0; i<n; i++)
cin>>a[i];

//output special cases when no array element is positive...
//in that case the largest element itself is the result.
int x=a[0];
for(int i=1; i<n; i++)
if(x<a[i]) x=a[i];
if(x<=0) {cout<<x; return 0;}


//creating circular array...
for(int i=0; i<n-1; i++)
a[i+n]=a[i];

//now using kadane's algorithm
int sum=0,max=a[0], start=0;
for(int i=0; i<2*n-1; i++)
{sum+=a[i];
if(sum<0) {sum=0; start=i+1;}
if(i==start+n) break;          //So that same element is not added twice...
if(max<sum) max=sum;
}

cout<<max;
return 0;
}