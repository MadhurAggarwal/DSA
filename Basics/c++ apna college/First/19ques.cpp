#include <iostream>
using namespace std;
//prints fibbonacci sequence...
//easy
int main(){
    int n;
    cout<<"Enter the number of terms required: ";
    cin>>n;
    int i=1;
    int j=1;
    
    for(int count=1; count<=n;)
    {if(count!=1) cout<<", ";
    cout<<i;
    count++;
    if(count>=n+1) break;
    cout<<", "<<j;
    count++;
    i=i+j;
    j=i+j;
    }
    return 0;
}