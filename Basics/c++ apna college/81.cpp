#include <iostream>
#include <queue>
using namespace std;
//stack using queue making push costly

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
 {q2.push(x);
  while(!q1.empty())
    {q2.push(q1.front());
     q1.pop();
    }
  q1.swap(q2);
  n++;
 }
 int top()
 {if(n==0) {cout<<"Empty Stack"<<endl; return 0;}
  return q1.front();
 }
 void pop()
 {if(n==0) {cout<<"Stack Underflow"<<endl; return;}
  q1.pop();
  n--;
 }
 bool empty()
 {if(q1.empty()) return 1;
  return 0;
 }
 int size()
 {return n;
 }
};

int main()
{stack st;
 for(int i=1;i<=10;i++)
 st.push(i*i);
 cout<<st.top()<<endl;
 for(int i=1;i<=8;i++)
 st.pop();
 cout<<st.top()<<endl;
 for(int i=1;i<=3;i++)
 st.pop();
 cout<<st.top()<<endl;
 return 0;
}