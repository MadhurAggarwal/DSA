#include <iostream>
using namespace std;

class node
{public:
int data;
node* next;
node(int value)
{data=value;
next=NULL;
}
};

void insertend(node* &head, int value)
{node*n=new node(value);
 if(head==NULL) {head=n; return;}
 node*temp=head;
 while(temp->next) temp= temp->next;
 temp->next=n;
}

void print(node*head)
{while(head) 
    {cout<<head->data<<" "; head= head->next;}
cout<<endl;
}

int length(node*head)
{int count=0;
while(head) {count++; head=head->next;}
return count;
}

void reverse(node* &head)
{node*temp1=head;
 node*temp2=head->next;
 while(temp2) 
 {node*temp3=temp2->next;
  temp2->next=temp1;
  temp1=temp2;
  temp2=temp3;
 }
 head->next=NULL;
 head=temp1;
}

int main()
{node*head= NULL;
for(int i=1;i<=5;i++) insertend(head,i);
cout<<"Length of list is: "<<length(head)<<endl;
print(head);
reverse(head);
print(head);
return 0;
}
