#include <iostream>
#include <stack>
using namespace std;
//queue using 2 stacks

class queue
{private:
 stack<int> s1;
 stack<int> s2;

 public:
 void enqueue(int x)
 {s1.push(x);
 }
 void dequeue()
 {if(!s2.empty()) {s2.pop(); return;}
  if(s1.empty()) {cout<<"Underflow"<<endl; return;}
  while(!s1.empty())
    {s2.push(s1.top());
     s1.pop();
    }
  s2.pop();
 }
 int peek()
 {if(s1.empty() && s2.empty()) {cout<<"Empty Queue"<<endl; return INT32_MIN;}
  if(!s2.empty()) return s2.top();
  else 
    {while(!s1.empty())
        {s2.push(s1.top());
         s1.pop();
        }
     return s2.top();
    }
 }
 bool empty()
 {if(s1.empty() && s2.empty()) return 1;
  return 0;
 }
};

int main()
{queue q;
 for(int i=1;i<30;i+=4)
 q.enqueue(i*i);
 cout<<q.peek()<<endl;
 q.dequeue();
 cout<<q.peek()<<endl;
 cout<<q.empty()<<endl;
 for(int i=0;i<6;i++)
 q.dequeue();
 cout<<q.empty()<<endl;
 cout<<q.peek()<<endl;
 q.dequeue();
 q.dequeue();
 cout<<q.peek()<<endl;
 return 0;
}