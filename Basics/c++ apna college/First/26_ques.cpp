#include <iostream>
using namespace std;
//Binary Search...
//This is probably incorrect
int BinarySearch(int a[], int n, int key)
{   int index=-1;
    int i=0, j=n-1;
    while(i<j)
    {if(a[(i+j)/2]>key) j=(i+j)/2;
    else i=(i+j)/2;
    }
    return index;
}

int main()
{   int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    cin>>a[i];
    cout<<"Enter the value of key:";
    int key;
    cin>>key;
    cout<<"The value of index is: "<<BinarySearch(a,n,key)<<endl;
    return 0;
}