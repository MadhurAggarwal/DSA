#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
//prefix evaluation using stacks
int prefixevaluation(string s)
{stack<int> st;
 for(int i=s.length()-1; i>=0; i--)
 {if(s[i]>='0' && s[i]<='9') st.push(s[i]-'0');
 else 
    {int a=st.top(); 
    st.pop();
    int b=st.top();
    st.pop();
    if(s[i]=='*') st.push(a*b);
    else if(s[i]=='+') st.push(a+b);
    else if(s[i]=='-') st.push(a-b);
    else if(s[i]=='/') st.push(a/b);
    else if(s[i]=='%') st.push(a%b);
    else if(s[i]=='^') st.push(pow(a,b));
    }
 }
return st.top();
}

int main()
{string s;
 cin>>s;
 cout<<prefixevaluation(s);
 return 0;
}