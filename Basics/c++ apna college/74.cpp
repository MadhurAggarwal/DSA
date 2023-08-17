#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int postfix(string s)
{stack<int> st;
 for(int i=0;i<s.length();i++)
 {if(s[i]>='0'&&s[i]<='9') st.push(s[i]-'0');
  else {int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        //note that here second operand is stacked above first operand
        //so we write b-a and b/a instead of a-b and a/b
        switch(s[i])
            {case '*': st.push(b*a); break;
             case '+': st.push(b+a); break;
             case '-': st.push(b-a); break;
             case '/': st.push(b/a); break;
             case '^': st.push(pow(b,a)); break;
             case '%': st.push(b%a); break;    
            }
        }
 }
 return st.top();
}

int main()
{string s;
 cin>>s;
 cout<<postfix(s);
 return 0;
}