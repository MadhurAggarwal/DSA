#include <iostream>
using namespace std;
//check pythagorean triplet...
//easy
bool check(int a, int b, int c)
{int x,y,z;
x=max(a,max(b,c));
if(x==a){y=b; z=c;}
else if(x==b){y=a; z=c;}
else if(x==c){y=a; z=b;}
if(x*x==y*y+z*z) return true;
return false;

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c)) cout<<"Pythagorean triplet";
    else cout<<"Not a pythagorean triplet.";
    return 0;
}