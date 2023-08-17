#include <iostream>
using namespace std;
//to find the first and last occurance of a number x in an array a:
int firstoccurance(int a[], int n, int x, int i)
{if(i==n) return -1;
if(a[i]==x) return i;
return firstoccurance(a,n,x,i+1);
}

int lastoccurance(int a[], int n, int x, int i)
{if(i==-1) return -1;
if(a[i]==x) return i;
return lastoccurance(a, n, x, i-1);
}

//method 2:
int last(int a[], int n, int x, int i)
{if(i==n) return -1;
int restarray=last(a,n,x,i+1);
if(restarray!=-1) return restarray;
if(a[i]==x) return i;
return -1;
}

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
int x;
cin>>x;
cout<<firstoccurance(a,n,x,0)<<endl;
//cout<<lastoccurance(a,n,x,n-1)<<endl;
cout<<last(a,n,x,0)<<endl;
return 0;
}