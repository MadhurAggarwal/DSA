#include <iostream>
using namespace std;

int main()
{string s;
cin>>s;

//replace uppercase and lowercase: 
for(int i=0; i<s.size(); i++)
{if(s[i]>='a' && s[i]<='z') s[i]-=32;     //A=65, a=97
else if(s[i]>='A' && s[i]<='Z') s[i]+=32;}

cout<<s<<endl;
return 0;
}