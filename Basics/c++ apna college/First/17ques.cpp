#include <iostream>
using namespace std;
//check armstrong number: sum of cubes of digits is equal to number itself...
//easy
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int a=n, sum=0;
    while(n>0)
    {sum+=(n%10)*(n%10)*(n%10);
    n/=10;
    }
    if(sum==a) cout<<a<<" Is an Armstrong Number.";
    else cout<<a<<" Is NOT an armstrong number.";
    return 0;
}