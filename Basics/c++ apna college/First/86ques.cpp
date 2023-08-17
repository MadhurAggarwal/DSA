#include <iostream>
using namespace std;
//merge sort
void merge(int*arr,int l,int mid, int r)
{int*temp1=new int[mid-l+1];
 int*temp2=new int[r-mid];
for(int i=l;i<=mid;i++) temp1[i-l]=arr[i];
for(int i=mid+1;i<=r;i++) temp2[i-mid-1]=arr[i];

int i=0,j=0,k=l;
while(i<=mid-l&&j<r-mid)
{if(temp1[i]<=temp2[j]) {arr[k++]=temp1[i]; i++;}
 else {arr[k++]=temp2[j]; j++;}
}
while(i<=mid-l) {arr[k++]=temp1[i]; i++;}
while(j<r-mid)  {arr[k++]=temp2[j]; j++;}
delete[] temp1;
delete[] temp2;

}

void mergesort(int*arr,int l,int r)
{if(l<r)
    {int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}

int main()
{int n;
cin>>n;
int*arr=new int[n];
for(int i=0;i<n;i++)
cin>>arr[i];
mergesort(arr,0,n-1);
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
delete[] arr;
return 0;
}