#include <iostream>
#include <stack>
using namespace std;
//queue using a single stack
class queue
{stack<int>st;
 public:
 void enqueue(int x)
 {st.push(x);
 }
 void dequeue()
 {if(st.empty()) {cout<<"Queue Underflow"<<endl; return;}
  int a=st.top();
  st.pop();
  if(!st.empty()) dequeue();
  else return;
  st.push(a);
 }
 int peek()
 {if(st.empty()) {cout<<"Empty Queue"<<endl; return 0;}
  int a=st.top();
  st.pop();
  int ans;
  if(!st.empty()) ans=peek();
  else ans=a;
  st.push(a);
  return ans;
 }
 bool empty()
 {if(st.empty()) return 1;
  return 0;
 }
};

int main()
{queue q;
 for(int i=-7;i<30;i+=4)
 q.enqueue(i*i);
 cout<<q.peek()<<endl;
 cout<<q.peek()<<endl;
 for(int i=0;i<6;i++)
 q.dequeue();
 cout<<q.peek()<<endl;
 for(int i=0;i<3;i++)
 q.dequeue();
 cout<<q.peek()<<endl;
 q.dequeue();
 cout<<q.peek()<<endl;
 return 0;
}