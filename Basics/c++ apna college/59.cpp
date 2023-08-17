#include <iostream>
using namespace std;
class node
{public:
int data;
node* next;
node(int v)
{data=v;
 next=NULL;
}
};

void insertend(node* &head, int v)
{node* n=new node(v);
if(head==NULL) {head=n; return;}
node* temp=head;
while(temp->next) temp=temp->next;
temp->next=n;
}

void print(node* head)
{while(head) {cout<<head->data<<" "; head=head->next;}
 cout<<endl;
}

node* reversek(node* &head, int k)
{if(head==NULL||head->next==NULL) return head;
 node* temp1=head;
 node* temp2=head->next;
 int count=1;
 while(count++<k&&temp2) 
    {node* temp3=temp2->next;
     temp2->next=temp1;
     temp1=temp2;
     temp2=temp3;
    }
head->next= reversek(temp2,k);
head=temp1;
return head;
}

int main()
{node* head=NULL;
 for(int i=1;i<11;i++)
 insertend(head,i);
 print(head);
 reversek(head,2);
 print(head);
return 0;
}