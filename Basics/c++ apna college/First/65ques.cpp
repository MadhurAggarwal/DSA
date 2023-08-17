#include <iostream>
using namespace std;
//prints all prime factors of n

int main()
{//input:
int n;
cin>>n;
int a[n+1]={};

//a[j] contains the smallest prime factor of j if it is composite
//else it contains 0 if j is prime
for(int i=2; i*i<=n; i++)
if(!a[i])   //that is, if i is prime
for(int j=i*i; j<=n; j+=i)
if(!a[j]) a[j]=i;   //if j is still unmarked, that is its smallest prime is i

//output:
while(n>1)
{if(a[n]) {cout<<a[n]<<" "; n/=a[n];}   //n is composite, so now n= n/(its smallest prime factor)
else {cout<<n<<endl; n=1;}              //n is prime, so now n= n/n, ie 1.
}
return 0;
}