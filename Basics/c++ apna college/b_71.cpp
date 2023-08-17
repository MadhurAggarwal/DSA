#include <iostream>
#include <stack>
using namespace std;
//reverse a stack recursively
//we want to make changes to the stack so call by reference

void print(stack<int> st)
{if(st.empty()) return;
 int a=st.top();
 st.pop();
 print(st);
 cout<<a<<" ";
}

void insertbottom(stack<int> &st, int end)
{if(st.empty()) {st.push(end); return;}
 int top_value=st.top();
 st.pop();
 insertbottom(st,end);
 st.push(top_value);
}

void reverse(stack<int> &st)
{if(st.empty()) return;
 int a=st.top();
 st.pop();
 reverse(st);
 insertbottom(st,a);
}

int main()
{stack<int> st;
 for(int i=1;i<=10;i++)
 st.push(i);
 print(st); cout<<endl;
 reverse(st);
 print(st); cout<<endl;
 return 0;
}
