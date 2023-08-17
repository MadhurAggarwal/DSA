#include <iostream>
using namespace std;
#include <cmath>
//prints prime numbers between two numbers...
//easy
bool isPrime(int a)
{for(int i=2; i<=sqrt(a); i++)
if(a%i==0) return 0;
return 1; 
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"Prime numbers between "<<a<<" and "<<b<<" are: ";
    for(int i=a; i<b; i++)
    if(isPrime(i)) cout<<i<<" ";
    cout<<endl;
    return 0;
}