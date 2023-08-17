#include <iostream>
#include <stack>
#include <string>
using namespace std;
//reverse the order of words of a sentence using stack:

string reversesentence(string s)
{stack <string> st;
 string temp="";
 int i=-1;
 do
    {i++;
     if(s[i]==' '||s[i]=='\0') {st.push(temp); temp="";}
     else temp+=s[i];
    }
 while(s[i]!='\0');
 while(!st.empty())
    {temp+=st.top();
     temp+=" ";
     st.pop();
    }
 return temp;
}

int main()
{string s;
 getline(cin,s);
 cout<<reversesentence(s);
 return 0;
}