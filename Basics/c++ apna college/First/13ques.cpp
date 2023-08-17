#include <iostream>
using namespace std;
//prints star pattern...
//easy
int main() {
    cout<<"Enter value of n: ";
    int n;
    cin>>n;
    /*for(int i=1; i<=n; i++)
    {   for(int j=1; j<=2*(n-i); j++) cout<<" ";
        for(int j=i; j>0; j--) {cout<<"*"; if(j!=1) cout<<" ";}
        for(int j=2; j<=i; j++) cout<<" "<<"*";
        cout<<endl;
    }*/
    for(int i=n; i>0; i--)
    {   for(int j=1; j<=2*(n-i); j++) cout<<" ";
        for(int j=i; j>0; j--) {cout<<"*"; if(j!=1) cout<<" ";}
        for(int j=2; j<=i; j++) cout<<" "<<"*";
        cout<<endl;
    }
    return 0;
}