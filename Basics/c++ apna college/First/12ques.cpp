#include <iostream>
using namespace std;
//prints pallindromic pattern...
//easy
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {   for(int j=1; j<=2*(n-i); j++) cout<<" ";
        for(int j=i; j>0; j--) {cout<<j; if(j!=1) cout<<" ";}
        for(int j=2; j<=i; j++) cout<<" "<<j;
        cout<<endl;
    }
    return 0;
}