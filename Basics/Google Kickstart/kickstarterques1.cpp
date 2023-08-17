#include <iostream>
using namespace std;

//in this code k-x or x-k depending on which is bigger...

int main()
{int test_cases, cases=1;
cin>>test_cases;
while(test_cases>0)
{int n,k;
cin>>n>>k;
string s;
cin>>s;
int x=0;
for(int i=0; i<n/2; i++)
if(s[i]!=s[n-i-1]) x++;
cout<<"Case #"<<cases<<": ";
if(k>=x) cout<<k-x<<endl;
else cout<<x-k<<endl;

test_cases--;
cases++;
}

return 0;
}