#include <iostream>
using namespace std;
//quick sort
void swap(int *arr,int i,int j)
{if(i==j) return;
 arr[i]=arr[i]+arr[j];
 arr[j]=arr[i]-arr[j];
 arr[i]=arr[i]-arr[j];
}

int partition(int*arr,int l,int r)
{int i=l-1; 
/***
//i points to the last element of array lower than arr[r]
//so arr[i+1] is the first element larger than it
//so if arr[j] is smaller than arr[r] then swap element at position i+1 and j, then increment i
***/
for(int j=l;j<r;j++)
if(arr[j]<arr[r]) swap(arr,++i,j);
//just change it to if(arr[j]>arr[r]) for decreasing order
swap(arr,++i,r);
return i;
}

void quicksort(int*arr,int l,int r)
{if(l<r)
    {int pi=partition(arr,l,r);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,r);
    }
}

int main()
{int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
cin>>arr[i];
quicksort(arr,0,n-1);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
delete[] arr;
return 0;
}