#include <iostream>
using namespace std;
//Binary Search self...
//Theory Important***
int BinarySearch(int a[], int n, int key)
{   int index=-1;
    int i=0, j=n-1;
    for(;(j-i)>1;)
    {   if(key<=a[(i+j)/2]) j=(i+j)/2;
        else i=(i+j)/2;
        if(key==a[i]||key==a[j]) break;
    }
    if(a[j]==key) return j;
    else if(a[i]==key) return i;
    else return -1;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int key;
    cin>>key; 
    cout<<BinarySearch(a,n,key);
    return 0;
}