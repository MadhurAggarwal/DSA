#include <iostream>
using namespace std;
//inverted pattern...
//easy
int main()
{   int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {for(int j=1; j<=n-i; j++) cout<<j<<" ";
    cout<<endl;
    }
    return 0;
}