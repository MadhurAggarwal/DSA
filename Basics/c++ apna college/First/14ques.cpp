#include <iostream>
using namespace std;
//prints zig zag pattern...
//easy
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //row1
    cout<<"    ";//4 spaces
    for(int i=3; i<=n; i+=4) cout<<"*       ";//star and 7 spaces
    cout<<endl;
    //row2
    cout<<"  ";//2 spaces
    for(int i=2; i<=n; i+=2) cout<<"*   ";//star and 3 spaces
    cout<<endl;
    //row3
    for(int i=1; i<=n; i+=4) cout<<"*       ";//star and 7 spaces
    cout<<endl;
    return 0;
}