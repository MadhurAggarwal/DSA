#include <iostream>
using namespace std;
//reverse the digits...
//easy
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=n%10;
    n/=10;
    while(n>0)
    {a*=10;
    a+=n%10;
    n/=10;
    }
    cout<<a;
    return 0;
}