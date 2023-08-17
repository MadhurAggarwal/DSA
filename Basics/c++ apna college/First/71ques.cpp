#include <iostream>
#include <string>
using namespace std;
//create a function to reverse a string using recursion:

//method 1:
string reverse1(string s, int n)
{if(n==0) return "";
return s[n-1]+reverse1(s,n-1);
}

//method 2:
void reverse2(string s)
{if(s.length()==0) return;
string x=s.substr(1);
reverse2(x);
cout<<s[0];
}

int main()
{string s;
cin>>s;
int n=0;
while(s[n]!='\0') n++;
s=reverse1(s,n);
cout<<s<<endl;
reverse2(s);
return 0;
}