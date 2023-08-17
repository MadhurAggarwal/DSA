#include <iostream>
using namespace std;
//Maximum Subarray Sum
//Cumulative sum approach O(n2)
//Theory, IMPORTANT***

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

    //Method#2 CUMULATIVE SUM APPROACH:
//Store the cumulative sum till an element in an array b
//This reduces one loop used in brute force approach
int b[n];
b[0]=a[0];
for(int i=1; i<n; i++)
b[i]=b[i-1]+a[i];


//Now, We only need 2 loops, one pointing at start and other pointing at end.
//subtract cumulative sum till start from cumulative sum till end to get sum of subarrays.
int max=a[0];
for(int i=0; i<n; i++)
for(int j=i+1; j<n; j++)
if(b[j]-b[i]>max) max=b[j]-b[i];

cout<<max;
return 0;
}