#include <iostream>
using namespace std;
//count inversion using mergesort
//if i<j and arr[i]>arr[j] then i and j form an inversion. 
//count total inversions in given array
int count(int*arr,int l,int mid,int r)
{int*temp1=new int[mid-l+1];
 int*temp2=new int[r-mid];
 for(int i=l;i<=mid;i++) temp1[i-l]=arr[i];
 for(int i=mid+1;i<=r;i++) temp2[i-mid-1]=arr[i];

 int ans=0,i=0,j=0,k=l;
 while(i<=mid-l&&j<r-mid)
 {if(temp1[i]<temp2[j]) arr[k++]=temp1[i++];
 else {arr[k++]=temp2[j++]; ans+=(mid-l+1)-i;}
 }
 while(i<=mid-l) arr[k++]=temp1[i++];
 while(j<r-mid)  arr[k++]=temp2[j++];
 
 delete[] temp1;
 delete[] temp2;
 return ans;
}

int countinversion(int*arr,int l,int r)
{if(l>=r) return 0;
int mid=(l+r)/2;
int ans=0;
ans+=countinversion(arr,l,mid);
ans+=countinversion(arr,mid+1,r);
ans+=count(arr,l,mid,r);
return ans;
}

int main()
{int n; cin>>n;
int*arr=new int[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<countinversion(arr,0,n-1);

delete[] arr;
return 0;
}