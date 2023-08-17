#include <iostream>
using namespace std;
//given 2 sorted linked lists
//merge them to form a single sorted list

class  node
{public:
 int data;
 node* next;
 node(int v)
 {data=v;
  next=NULL;
 }
};

void print(node* head)
{while(head) {cout<<head->data<<" "; head=head->next;}
 cout<<endl;
}

void insertnode(node* &head, int v)
{node* n=new node(v);
 if(head==NULL) {head=n; return;}
 node* temp=head;
 while(temp->next) temp=temp->next;
 temp->next=n;
}

//first and second are heads of 2 sorted lists
//this method creates a third list
//first and second lists stay intact
node* mergelists(node* first, node* second)
{node* head=NULL;
 while(first&&second)
    {if(first->data<second->data) {insertnode(head,first->data); first=first->next;}
     else {insertnode(head,second->data); second=second->next;}
    }
 while(first) {insertnode(head,first->data); first=first->next;}
 while(second) {insertnode(head,second->data); second=second->next;}
 return head;
}

//method#2: memory effiecient 
//this method changes the links in the given lists
//first and second list get destroyed in the process
node* merge2(node* first, node* second)
{node* n=new node(0);
 node* third=n;
    while(first&&second) 
        {if(first->data<second->data) {third->next=first; first=first->next;}
         else {third->next=second; second=second->next;}
         third=third->next;
        }
    while(first)
        {third->next=first; first=first->next; third=third->next;}
    while(second)
        {third->next=second; second=second->next; third=third->next;}
    return n->next;
}

//recursive approach for method #2:
node* mergerecursive(node* first, node* second)
{if(!first) return second;
 if(!second) return first;
 node* result;
 if(first->data<second->data) {result=first; result->next=mergerecursive(first->next,second);}
 else {result=second; result->next=mergerecursive(first,second->next);}
 return result;
}

int main()
{node* head1=NULL;
 node* head2=NULL;
 for(int i=5; i<40; i+=4)
 insertnode(head1,i);
 for(int i=7; i<34; i+=3)
 insertnode(head2,i);
 cout<<"List 1: "; print(head1);
 cout<<"List 2: "; print(head2);

 cout<<endl<<"Method #1"<<endl;
 node* head3= mergelists(head1,head2);
 cout<<"List 1: "; print(head1);
 cout<<"List 2: "; print(head2);
 cout<<"Merged list: "; print(head3);

 cout<<endl<<"Method #2"<<endl;
 node*head4= mergerecursive(head1,head2);
 cout<<"List 1: "; print(head1);
 cout<<"List 2: "; print(head2);
 cout<<"Merged list: "; print(head4);
 return 0;
}