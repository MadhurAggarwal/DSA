#include <iostream>
using namespace std;
//count sort
//only for sorting integers
//time complexity O(n) or O(k) whichever is larger
//(where n is size of array and k is largest value in array)

void countsort(int*arr, int n)
{int max=arr[0],min=arr[0];
for(int i=0;i<n;i++)
{if(arr[i]>max) max=arr[i];
else if(arr[i]<min) min=arr[i];}

if(min>0) min=0;
int*count(new int[max-min+1]{});

for(int i=0;i<n;i++)
count[arr[i]-min]++;

int i=0;
for(int j=0;j<=max-min;j++)
while (count[j]--) arr[i++]=j+min;
}

//driver code
int main()
{int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
cin>>arr[i];
countsort(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
delete[] arr;
return 0;
}