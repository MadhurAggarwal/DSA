#include <iostream>
using namespace std;

int main()
{int g;
cin>>g;
int x=2*g;
int ans=0;

for(int i=1; i<=g; i++)
if(x%i==0 && ((x/i)+1-i>0) &&((x/i)+1-i)%2==0) ans++;
cout<<ans;

return 0;
}