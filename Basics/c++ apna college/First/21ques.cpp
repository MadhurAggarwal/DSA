#include <iostream>
using namespace std;
//calculate binomial coefficient nCr
//easy
long factorial (int n)
{if(n==0) return 1;
long factorial=1;
for(;n>0;n--)
factorial*=n;
return factorial;
}

int main()
{   cout<<"To Calculate nCr, enter the values of n and r(n>r): ";
    int n, r;
    cin>>n>>r;
    cout<<"The value of "<<n<<"C"<<r<<" is: ";
    cout<<(factorial(n)/factorial(n-r))/factorial(r);
    return 0;
}