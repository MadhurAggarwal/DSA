#include <iostream>
using namespace std;
//linear search...
//theory basics
int LinearSearch(int a[], int n, int key)
{int index=-1;
for(int i=0; i<n; i++)
if(key==a[i]) index=i;
return index;
}

int main(){
    int n;
    cout<<"Enter array length: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    cin>>a[i];
    int key;
    cout<<"Enter key: ";
    cin>>key; 
    cout<<LinearSearch(a,n,key);
    return 0;
}