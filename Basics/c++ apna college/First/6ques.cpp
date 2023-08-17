#include <iostream>
using namespace std;
//prints Floyds triangle...
//easy
int main(){
    int n,j=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {   for(; j<=((i+1)*i)/2;j++)
        {cout<<j<<" "; if(j<10) cout<<" ";}
        cout<<endl;
    }
    return 0;
}