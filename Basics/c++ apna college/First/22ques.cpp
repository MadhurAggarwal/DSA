#include <iostream>
using namespace std;
//prints pascals triangle
//easy
int factorial (int n)
{if(n==0) return 1;
int factorial=1;
for(;n>0;n--)
factorial*=n;
return factorial;
}

int nCr(int n, int r)
{return (factorial(n)/factorial(n-r))/factorial(r);
}

int main(){
    int n;
    cout<<"Enter the desired number: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<=n; i++)
    {for(int j=0; j<=i; j++) cout<<nCr(i,j)<<" ";
    cout<<endl;}
    return 0;
}