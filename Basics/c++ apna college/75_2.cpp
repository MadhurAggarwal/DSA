#include <iostream>
#include <string>
#include <stack>
using namespace std;
//infix to postfix

int precedence(char a)
{if(a=='^') return 3;
 if(a=='*'||a=='/'||a=='%') return 2;
 if(a=='+'||a=='-') return 1;
 return -1;
}

bool isoperand(char ch)
{if(ch>='A'&&ch<='Z') return 1;
 if(ch>='a'&&ch<='z') return 1;
 if(ch>='0'&&ch<='9') return 1;
 return 0;
}

bool isoperator(char ch)
{if(ch=='^'||ch=='*'||ch=='/'||ch=='%') return 1;
 if(ch=='+'||ch=='-') return 1;
 return 0;
}

string InfixToPostfix(string s)
{string ans="";
 stack<char> st;
 for(int i=0;i<s.length(); i++)
 {if(isoperand(s[i])) ans+=s[i];
  else if(s[i]=='(') st.push(s[i]);
  else if(s[i]==')')
    {while(st.top()!='(') 
        {ans+=st.top();
         st.pop();
        }
     st.pop();
    }
  else if(isoperator(s[i]))
    {while(!st.empty() && precedence(st.top())>precedence(s[i]))
        {ans+=st.top();
         st.pop();
        }
     st.push(s[i]);
    }
 }
 while(!st.empty())
 {ans+=st.top();
  st.pop();
 }
 return ans;
}

int main()
{string s;
 cin>>s;
 cout<<InfixToPostfix(s);
 return 0;
}

