#include <iostream>
#include <string>
using namespace std;
//given a string. replace any consecutive pi in the string to 3.14 using recursion:

string replacepi(string s)
{if(s.length()<2) return s;
if(s[0]=='p'&&s[1]=='i') return "3.14"+replacepi(s.substr(2));
else return s[0]+replacepi(s.substr(1));}

int main()
{string s;
cin>>s;
cout<<replacepi(s);
return 0;
}