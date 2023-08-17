#include <iostream>
using namespace std;
//easy
int SumTill(int n){
    return( n*(n+1))/2;
}

int main(){
    int n;
    cin>>n;
    cout<<SumTill(n);
    return 0;
}