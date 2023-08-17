#include <iostream>
using namespace std;
//put even position elements after odd position elements

class node
{public:
 int data;
 node* next;
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

void print(node* head)
{while(head) {cout<<head->data<<" "; head=head->next;}
 cout<<endl;
}

void oddevennodes(node* head)
{node* odd=head;
 node* even=head->next;
 node* evenstart=head->next;
 while(even&&even->next)
    {odd->next=even->next;
    odd=odd->next;
    even->next=odd->next;
    even=even->next;
    }
odd->next=evenstart;
//if odd number of total nodes, then even pointer is already odd->next, that is null;
//but if even number of total nodes, then last node is even. even->next should be made null
if(even) even->next=NULL;
}

int main()
{node* head=NULL;
 for(int i=5; i<13;i++)
 insertnode(head,i);
 print(head);
 oddevennodes(head);
 print(head);
 return 0;
}