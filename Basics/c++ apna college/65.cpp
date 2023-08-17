#include <iostream>
using namespace std;
//circular linked lists

class node
{public:
 int data;
 node* next;
 node(int v)
 {data=v;
  next=NULL;
 }
};

//insert node in non circular list:
void insertnode(node* &head, int v)
{node* n=new node(v);
 if(head==NULL) {head=n; return;}
 node* temp=head;
 while(temp->next) temp=temp->next;
 temp->next=n;
}

//insert head node in circular list:
void inserthead(node* &head, int v)
{node* n=new node(v);
 if(head==NULL) {head=n; head->next=head; return;}
 node* temp=head;
 while(temp->next!=head) temp=temp->next;
 temp->next=n;
 n->next=head;
 head=n;
}

//insert node in circular list:
void insertcircular(node* &head, int v)
{if(head==NULL) {inserthead(head,v); return;}
 node* n=new node(v);
 node*temp=head;
 while(temp->next!=head) temp=temp->next;
 temp->next=n;
 n->next=head;
}

//for printing circular linked list:
void print(node* head)
{node* temp=head;
 do
 {cout<<temp->data<<" "; temp=temp->next;}
 while(temp&&temp!=head);
 cout<<endl;
}

//make circular list:
void makecircular(node* head)
{node* temp=head;
 while(temp->next) temp=temp->next;
 temp->next=head; 
}

//delete head of circular list
void deletehead(node* &head)
{node* todelete=head;
 node* last=head;
 while(last->next!=head) last=last->next;
 last->next=todelete->next;
 head=todelete->next;
 delete todelete;
}

//delete ith node of circular list
void deletecircular(node* &head, int i)
{if(i==1) {deletehead(head); return;}
 int count=1;
 node* temp=head;
 while(++count<i) {temp=temp->next;}
 node* todelete= temp->next;
 temp->next=todelete->next;
 delete todelete;
}

int main()
{node*head1=NULL;
 for(int i=10; i<=60; i+=7)
 insertnode(head1,i);
 print(head1);
 makecircular(head1);
 insertcircular(head1,27);
 print(head1);

 node* head2=NULL;
 for(int i=17; i<50; i+=4)
 insertcircular(head2,i);
 print(head2);
 inserthead(head2,13);
 print(head2);
 deletecircular(head2,4);
 deletecircular(head2,4);
 print(head2);
 return 0;
}