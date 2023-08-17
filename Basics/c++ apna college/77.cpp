#include <iostream>
#include <stack>
using namespace std;
//check balanced parenthesis

bool balancedparenthesis(string s)
{stack<char> st;
 for(int i=0;i<s.length();i++)
 {if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
  else if(s[i]==')') {if(st.top()!='(') return 0; else st.pop();} 
  else if(s[i]=='}') {if(st.top()!='{') return 0; else st.pop();}
  else if(s[i]==']') {if(st.top()!='[') return 0; else st.pop();}
 }
 if(st.empty()) return 1;
 return 0;
}

int main()
{string s;
 cin>>s;
 bool ans=balancedparenthesis(s);
 if(ans==1) cout<<"Balanced Parenthesis.";
 else cout<<"Unbalanced Parenthesis.";
 return 0;
}