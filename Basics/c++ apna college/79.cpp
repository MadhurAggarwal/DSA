#include <iostream>
using namespace std;

class node
{public:
 int data;
 node* next;
 node(int x)
 {data=x;
  next=NULL;
 }
};

class queue
{private:
 node* front;
 node* back;
 
 public:
 queue()
 {front=NULL;
  back=NULL;
 }
 void enqueue(int x)
 {node*n=new node(x);
  if(!front) {front=n; back=n; return;}
  back->next=n;
  back=n;
 }
 void dequeue()
 {if(!front) {cout<<"Queue Underflow"<<endl; return;}
  node* todelete=front;
  front=front->next;
  delete todelete;
 }
 bool empty()
 {if(front) return false;
  return true;
 }
 int peek()
 {if(!front) {cout<<"Empty Queue"<<endl; return 0;}
  return front->data;
 }
};

int main()
{queue q;
 for(int i=0;i<30;i+=3)
 q.enqueue(i*i);

 for(int i=0;i<6;i++)
 {cout<<q.peek()<<endl;
  q.dequeue();
 }
 if(q.empty()) cout<<"Queue is now empty"<<endl;
 else cout<<"Queue is not empty"<<endl;

 for(int i=0;i<6;i++)
 {cout<<q.peek()<<endl;
  q.dequeue();
 }
 if(q.empty()) cout<<"Queue is now empty"<<endl;
 else cout<<"Queue is not empty"<<endl;
 return 0;
}