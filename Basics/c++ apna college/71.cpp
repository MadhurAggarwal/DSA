#include <iostream>
#include <stack>
using namespace std;
//reverse a stack without taking extra memory

stack<int> insertbottom(stack<int> st, int a)
{if(st.empty()) {st.push(a); return st;}
 int value=st.top();
 st.pop();
 st=insertbottom(st,a);
 st.push(value);
 return st;
}

stack<int> reversestack(stack<int> st)
{if(st.empty()) return st;
 int a=st.top();
 st.pop();
 st=reversestack(st);
 st=insertbottom(st,a);
 return st;
}

void printstack(stack<int> st)
{if(st.empty()) return;
 int a=st.top();
 st.pop();
 printstack(st);
 cout<<a<<" ";
 return;
}

int main()
{stack<int> st;
 for(int i=1;i<=10;i++)
 st.push(i);
 printstack(st);
 cout<<endl;
 
 st=reversestack(st);
 printstack(st);
 cout<<endl;
 return 0;
}