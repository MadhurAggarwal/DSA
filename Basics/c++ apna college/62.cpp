#include <iostream>
using namespace std;
//Append last k nodes to the start of the list
//total n nodes, k from last is n-k+1 from beginning

class node
{public:
 node* next;
 int data;
 node(int v)
 {data=v;
  next=NULL;
 }
};

void insertnode(node* &head, int v)
{node* n=new node(v);
 if(head==NULL) {head=n; return;}
 node*temp=head;
 while(temp->next) temp=temp->next;
 temp->next=n;
}

//last is the last node, temp is the (k+1)th node from end
void appendknodes(node* &head, int k)
{int n=1;
 int count=1;
 node* temp=head; 
 node* last=head;
 while(last->next) 
    {last=last->next; n++;}
 while(count<n-k) 
    {count++; temp=temp->next;}
 last->next=head;
 head=temp->next;
 temp->next=NULL; 
}

void print(node* head)
{while(head) {cout<<head->data<<" "; head=head->next;}
 cout<<endl;
}

int main()
{node* head=NULL;
 for(int i=1; i<=7; i++)
 insertnode(head, i*i);
 print(head);
 appendknodes(head, 3);
 print(head);
 return 0;
}