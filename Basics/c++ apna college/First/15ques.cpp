#include <iostream>
#include <cmath>
using namespace std;
//check prime...
//easy
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    bool flag=0;
    int i;
    for(i=2; i<sqrt(n); i++) if(n%i==0) {flag=1; break;}
    if(flag==0) cout<<"Prime number";
    else cout<<"Not Prime"<<": Divisible By "<<i;
    return 0;
}