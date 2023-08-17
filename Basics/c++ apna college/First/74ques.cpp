#include <iostream>
#include <string>
using namespace std;

string removerepitition(string s)
{int max=0,min=0;
for(int i=0; i<s.length(); i++) {if(max<s[i]) max=s[i]; else if(min>s[i]) min=s[i];}
bool a[max-min+1]={};
string ans="";
for(int i=0; i<s.length(); i++) 
if(a[s[i]-min]==0) {a[s[i]-min]=1; ans+=s[i];}
return ans;
}

int main()
{string s;
cin>>s;
cout<<removerepitition(s);
return 0;
}