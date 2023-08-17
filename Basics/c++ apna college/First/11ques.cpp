#include <iostream>
using namespace std;
//number pattern...
//easy
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {for(int j=0; j<n-i; j++) cout<<" ";
    for(int j=1; j<=i; j++) {cout<<j; if(j<10) cout<<" ";} 
    cout<<endl;
    }
    return 0;
}