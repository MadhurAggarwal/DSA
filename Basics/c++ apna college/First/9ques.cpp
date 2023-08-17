#include <iostream>
using namespace std;
//prints a 0-1 triangle... 
//easy
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {   for(int j=i; j<2*i; j++) cout<<j%2<<" ";
        cout<<endl;
    }
    return 0;
}