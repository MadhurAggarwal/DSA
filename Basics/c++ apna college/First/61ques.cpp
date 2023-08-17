#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void subsets(char a[], int n)
{for(int i=0; i<(1<<n); i++)    //a number i from 0 to 2^(n-1) -1
{for(int j=0; j<n; j++)         //for each i, there are n characters in array, which may/may not be present
if(i&(1<<j)) cout<<a[j]<<" ";   //if bit at jth position in i is 1 then i it appears otherwise not.
cout<<endl;}
}

int main()
{int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++)
cin>>a[i];
subsets(a,n);
return 0;
}