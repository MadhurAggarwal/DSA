#include <iostream>
using namespace std;
#define N 100
//stacks
class stack
{private:
 int* arr;
 int top;

 public:
 //constructor
 stack()
 {arr=new int[N];
  top=-1;
 }
 //operations on stack
 void push(int x)
 {if(top==N-1) {cout<<"STACK OVERFLOW"<<endl; return;}
  arr[++top]=x;
 }
 void pop()
 {if(top==-1) {cout<<"STACK UNDERFLOW"<<endl; return;}
  top--;
 }
 int Top()
 {if(top==-1) {cout<<"EMPTY STACK"<<endl; return 0;}
  return arr[top];
 }
 bool empty()
 {return top==-1;
 }
};


int main()
{stack a;
 a.push(10);
 a.push(12);
 a.push(78);
 cout<<a.Top()<<endl;
 a.pop();
 cout<<a.Top()<<endl;
 a.pop();
 a.pop();
 a.pop();
 a.pop();
 cout<<a.empty()<<endl;
 return 0;
}