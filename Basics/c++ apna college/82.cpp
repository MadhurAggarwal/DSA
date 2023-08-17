#include <iostream>
#include <queue>
using namespace std;
//immplementing stack using 2 queues making  pop costly

class stack
{private:
 int n;
 queue<int> q1;
 queue<int> q2;

 public:
 stack()
 {n=0;
 }
 void push(int x)
 {q1.push(x);
  n++;
 }
 void pop()
 {if(n==0) {cout<<"Stack Underflow"<<endl; return;}
  for(int i=n;i>1;i--)
    {q2.push(q1.front());
     q1.pop();
    }
  q1.pop();
  q1.swap(q2);
  n--;
 }
 int top()
 {if(n==0) {cout<<"Empty Stack"<<endl; return 0;}
  int ans;
  for(int i=n;i>0;i--)
    {if(i==1) ans=q1.front();
     q2.push(q1.front());
     q1.pop();
    }
  q1.swap(q2);
  return ans;
 }
 int size()
 {return n;
 }
 bool empty()
 {if(n==0) return 1;
 return 0;
 }

};

int main()
{stack st;
 for(int i=1;i<10;i++)
 st.push(i*i*i);
 cout<<st.top()<<endl;
 while(!st.empty())
 {st.pop();
  cout<<st.top()<<endl;
 }
 cout<<st.top()<<endl;
 return 0;
}