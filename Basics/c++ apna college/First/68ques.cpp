#include <iostream>
using namespace std;
//check if an array is sorted in ascending order or not:
//my method:
bool checksort(int a[], int n)
{if(n==2) return a[1]>=a[0];
return (a[n-1]>=a[n-2])&&checksort(a,n-1);
}

//method2:
bool sorted(int a[], int n)
{if(n==1) return 1;
return (a[0]<=a[1])&&sorted(a+1,n-1);}  
//here we are sending the pointer to a+1, ie, reducing one elemenent from the array
//n==1 implies that array has been shortened to single element, the last element.

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
cout<<sorted(a,n);
return 0;
}