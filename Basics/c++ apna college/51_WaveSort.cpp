#include <iostream>
using namespace std;
//wave sort
//sort in alternate increasing-decreasing order
void swap(int*a, int*b)
{if(a==b) return;
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;}

void wavesort(int*arr,int n, int i)
{if(i>n-3) return;
if(arr[i]<arr[i+1]) swap(&arr[i],&arr[i+1]);
if(arr[i+1]>arr[i+2]) swap(&arr[i+1],&arr[i+2]);
wavesort(arr,n,i+2);
}

int main()
{int n; cin>>n;
int*arr=new int[n];
for(int i=0;i<n;i++)
cin>>arr[i];
wavesort(arr,n,0);

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
delete[] arr;
return 0;
}
