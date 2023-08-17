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
{node* n= new node(v);
 if(head==NULL) {head=n; return;}
 node*temp=head;
 while(temp->next) temp=temp->next;
 temp->next=n;
}

//connect the end of list to the postion i:
void makecycle(node* head, int i)
{node* temp=head;
 node* n;
 int count=1;
 while(temp->next)
    {if(count==i) n=temp;
     temp=temp->next;
     count++;
    }
 temp->next=n;
}

//detect cycle using floyds algorithm
bool floydcycle(node* head)
{node* slow=head;
 node* fast=head;
 while(fast&&fast->next)
    {slow=slow->next;
     fast=fast->next->next;
     if(slow==fast) return 1;
    }
return 0;
}

void detectcycle(node*head)
{if(floydcycle(head)) cout<<"List contains cycle"<<endl;
 else cout<<"No cycle found"<<endl;
}

void removecycle(node*head)
{node*fast=head;
 node*slow=head;
 bool check=0;
  while(fast&&fast->next)
    {slow=slow->next;
     fast=fast->next->next;
     if(slow==fast){check=1; break;}
    }
if(check==0) return;
fast=head;
//special cases when circular list:
//when circluar list of odd numbers, slow and fast meet at end node
if(slow->next==head) {slow->next=NULL; return;}
//when circular list of even numbers, slow and fast meet at start node
else if(slow==fast)
    {while(slow->next!=fast) slow=slow->next;
     slow->next=NULL;
     return;
    }
//general case:
    while(slow->next!=fast->next)
    {slow=slow->next;
     fast=fast->next;
     //note that now both are moving with same speed;
    }
slow->next=NULL;
}

//if cycle is present then this goes into infinite loop:
void print(node* head)
{while(head) {cout<<head->data<<" "; head=head->next;}
cout<<endl;
}

int main()
{node* head=NULL;
 for(int i=1;i<11;i++)
 insertend(head,i);
 print(head);
 detectcycle(head);
 makecycle(head,3);
 detectcycle(head);
 removecycle(head);
 detectcycle(head);
 return 0;
}