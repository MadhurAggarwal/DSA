#include <iostream>
using namespace std;
//prints butterfly pattern...
//easy
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {for(int j=1; j<=i; j++) cout<<"* ";
    for(int j=1; j<=2*(n-i); j++) cout<<"  ";
    for(int j=i; j>0; j--) cout<<"* ";
    cout<<endl;
    }
    
    for(int i=n; i>0; i--)
    {for(int j=1; j<=i; j++) cout<<"* ";
    for(int j=1; j<=2*(n-i); j++) cout<<"  ";
    for(int j=i; j>0; j--) cout<<"* ";
    cout<<endl;
    }
    return 0;
}