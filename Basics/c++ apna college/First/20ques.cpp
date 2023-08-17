#include <iostream>
using namespace std;
//factorial function...
//easy
long factorial (int n)
{long factorial=1;
for(;n>0;n--)
factorial*=n;
return factorial;
}

int main(){
    int n;
    cout<<"Entered the desired number: ";
    cin>>n;
    cout<<"Factorial of n is: ";
    cout<<factorial(n);
    return 0;
}