#include <iostream>
using namespace std;
//doubly linked list

class node
{public:
 int data;
 node*prev;
 node*next;
 node(int v)
    {data=v; 
    prev=NULL; next=NULL;
    }
};

void inserthead(node* &head, int v)
{node* n=new node(v);
 n->next=head;
 head->prev=n;
 head=n;
}

void insertend(node* &head, int v)
{node* n=new node(v);
 if(head==NULL) {head=n; return;}
 node* temp=head;

 while(temp->next) temp=temp->next;
 temp->next=n;
 n->prev=temp;
}

void print(node* head)
{cout<<"List in order: ";
 while(head) {cout<<head->data<<" "; head=head->next;}
 cout<<endl;
}

void reverseprint(node* head)
{cout<<"List in reverse: ";
 while(head->next) head=head->next;
 while(head) {cout<<head->data<<" "; head=head->prev;}
 cout<<endl;
}

void deletehead(node* &head)
{node* temp=head;
 if(temp->next)
    {temp->next->prev=NULL;
    head=temp->next;
    }
 delete temp;
}

void deletenode(node* &head, int i)
{if(i==1) {deletehead(head); return;}
 node* temp=head;
 int count=1;
 while(count!=i) {temp=temp->next; count++;}
 if(temp->next)
    {temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    }
 else temp->prev->next=NULL;
 delete temp;
}

int main()
{node* head=NULL;
 for(int i=1;i<=5;i++)
 insertend(head,i);
 print(head);
 reverseprint(head);
 inserthead(head, 10);
 inserthead(head,27);
 print(head);
 reverseprint(head);

 deletenode(head,4);
 print(head);
 reverseprint(head);
 deletehead(head);
 print(head);
 reverseprint(head);

 return 0;
}
