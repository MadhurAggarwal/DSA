#include <iostream>
#include <stack>
using namespace std;
//infix to postfix
/***
 * //traverse infix left to right
 * //if opening bracket, push it to stack;
 * //if operand, add to ans
 * //if operator, pop to stack till operator of less precedence 
 * //if closing bracket, then pop out stack till opening bracket is found
 * //if end of string, pop out stack completely
***/
//if precedence of s[i]<st.top()
//add st.top() to ans and pop it
//if precedence is less, add s[i] to ans and move

//checks if precedence of b is more than a
/***
 *  for these symbols only:
 *  '*' '/' '%'
 *  '+' '-' 
 * 
***/
bool isoperator(char a)
{if(a=='*'||a=='/'||a=='%'||a=='+'||a=='-') return 1;
 return 0;
}

bool precedence(char a, char b)
{if(a=='*'||a=='/'||a=='%') return 0;
 if(b=='*'||b=='/'||b=='%') return 1;
 return 0;
}

string infixtopostfix(string s)
{string ans="";
 stack<char> st;
 for(int i=0;i<s.length();i++)
    {if(s[i]==' ') continue;
    else if(s[i]>='0' && s[i]<='9') ans+=s[i];
    else if(s[i]=='(') st.push('(');
    else if(s[i]==')') 
        {while(st.top()!='(') 
            {ans+=st.top();
            st.pop();
            }
        st.pop();
        }
    else if(isoperator(s[i]));
        {if(st.empty() || st.top()=='(') {st.push(s[i]); continue;}
         while(precedence(s[i],st.top()))
            {ans+=st.top();
            st.pop();
            if(st.empty() || st.top()=='(') break;
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
 cout<<infixtopostfix(s);
 return 0;
}