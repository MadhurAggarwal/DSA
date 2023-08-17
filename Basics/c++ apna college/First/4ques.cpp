#include <iostream>
using namespace std;
//prints half upright pyramid right intended...
//easy
int main(){
    cout<<"Enter the value of n: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {for(int j=1; j<=n; j++)
    {if(j<n-i) cout<<"  ";
    else cout<<"* ";}
    cout<<endl;
    }
    return 0;
}