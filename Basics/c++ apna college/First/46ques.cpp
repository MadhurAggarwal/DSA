#include <iostream>
using namespace std;
//Maximum Circular Subarray Sum
//Online method...
//either the contributing elemens wrap around the array, or the non contributing elements wrap.
//Max subarray sum= Total sum- Sum of non contributing elements.

//to find sum of contributing elements(non wrapping), use kandanes algorithm.
//to find sum of non contributing elements(non wrapping), multiply each element by -1. now use kadane's algorithm.

int Kadane_Algorithm (int a[], int n)
{int amax=a[0];
for(int i=0; i<n; i++)
if(amax<a[i]) amax=a[i];
if(amax<=0) return amax;
    
int sum=0, max=a[0];
for(int i=0; i<n; i++)
{sum+=a[i];
if(sum<0) sum=0;
if(max<sum) max=sum;
}
return max;
}

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

//case 1: contributing elements dont wrap:
int max1=Kadane_Algorithm(a,n);

//case 2: contributing elements wrap:
int total=0;
for(int i=0; i<n; i++)
total+=a[i];

for(int i=0; i<n; i++)
a[i]=(-1)*(a[i]);

int max2=Kadane_Algorithm(a,n);
if(max2==(-1)*total) {cout<<max1; return 0;} 
//when all elements are negative just return the largest element itself;
max2=total+max2; 
//we have to subtract -(max2) from total...

//output
if(max1>max2) cout<<max1;
else cout<<max2;
return 0;
}