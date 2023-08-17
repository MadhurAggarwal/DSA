#include <iostream>
#define N 20
using namespace std;
//queue

class queue
{private:
 int* arr;
 int front;
 int back;
 
 public:
 //constructor
 queue()
 {arr=new int[N];
  front=-1;
  back=-1;
 }

 void enqueue(int x)
 {if(back==N-1) {cout<<"Queue Overflow"<<endl; return;}
  back++;
  if(front==-1) front++;
  arr[back]=x;
 }
  bool empty()
 {if(front==-1) return 1;
  if(front>back) return 1;
  return 0;
 }
 void dequeue()
 {if(empty()) {cout<<"Queue Underflow"<<endl; return;}
  front++;
 }
 int peek()
 {if(empty()) {cout<<"Empty queue"<<endl; return -1;}
  return arr[front];
 }
};

int main()
{queue q;
 cout<<q.peek()<<endl;
 for(int i=0;i<10;i++)
 q.enqueue(i*i);

 for(int i=0;i<4;i++)
 {cout<<q.peek()<<endl;
 q.dequeue();}
 if(q.empty()) cout<<"Queue is empty"<<endl;
 else cout<<"Queue is not empty"<<endl;

 for(int i=0;i<8;i++)
 {cout<<q.peek()<<endl;
 q.dequeue();}
 if(q.empty()) cout<<"Queue is empty"<<endl;
 else cout<<"Queue is not empty"<<endl;
 return 0;
}