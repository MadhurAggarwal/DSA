#include <iostream>
using namespace std;
//binary search...
//Theory Important***
int BinarySearch (int a[], int n, int key)
{int i=0, j=n-1;
    while(i<=j)
    {int mid=(i+j)/2;
    if(a[mid]==key) return mid;
    else if(a[mid]>key) j=mid-1;
    else i=mid+1;
    }
    return -1;
}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
int key;
cin>>key;
cout<<BinarySearch(a,n,key)<<endl;
return 0;
}