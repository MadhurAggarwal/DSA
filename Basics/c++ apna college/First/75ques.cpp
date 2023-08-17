#include <iostream>
#include <string>
using namespace std;

string relocatex(string s)
{if(s.length()==1) return s;
if(s[0]=='x') return relocatex(s.substr(1))+'x';
return s[0]+relocatex(s.substr(1));
}

int main()
{string s;
cin>>s;
cout<<relocatex(s);
return 0;
}