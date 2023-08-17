#include <iostream>
#include <string>
using namespace std;

void printpermutations(string s, string ans)
{if(s.length()==0) cout<<ans<<endl;
for(int i=0;i<s.length();i++)
printpermutations(s.substr(0,i)+s.substr(i+1),ans+s[i]);
}

int main()
{string s;
cin>>s;
printpermutations(s,"");
return 0;
}