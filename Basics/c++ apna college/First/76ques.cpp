#include <iostream>
#include <string>
using namespace std;
//this is important
//print all substrings of a string s using recursion:
void printsubstr(string s, string ans, int i)
{if(i<s.length()) {printsubstr(s,ans,i+1); printsubstr(s,ans+s[i],i+1);}
else cout<<ans<<endl;
}

//part 2: prints a substring with ascii values of character:
void printwithascii(string s, string ans, int i)
{if(i<s.length())
{printwithascii(s,ans,i+1);
printwithascii(s,ans+s[i],i+1);
printwithascii(s,ans+to_string(s[i]),i+1);
}
else cout<<ans<<endl;
}


int main()
{string s;
cin>>s;
string ans="";
//printsubstr(s,ans,0);
printwithascii(s,ans,0);
return 0;
}