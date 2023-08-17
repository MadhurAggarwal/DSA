#include <iostream>
using namespace std;
// linked lists:
// SINGLY LINKED LIST:
//head pointer stores the adress of the first node of linked list
//last node contains Null

class node 
{public:
//data contains the value of this node
//next points to the next node in the list
int data;
node *next;
//parameterised constructor
node (int v)
{data=v;
next=NULL;
}
};

//insert a value at the end of list:
//here we are modifying the linked list, we take head by reference:
void InsertTail(node* &head, int value)
{   //create a new node. n is the pointer to this node;
    //The element 'data' of this node contains the value to be added 
    //the element 'next' of this node contains null;
node* n=new node(value);
    //special case:
    //if the list contains no nodes, then head itself is null (doesn't points to any node)
    //so update head so that it is now n, and points the first node;
if(head==NULL) {head=n; return;}
    //now change the last pointer of list from null to n
    //for this, we create a node pointer temp:
    //at first, temp points to the head node;
node* temp=head;
    //now traverse the list by making temp point to the next node
    //when temp points to a node whose next is NULL, stop;
    //update 'next' of final node to contain n;
while(temp->next!=NULL) {temp=temp->next;}
temp->next=n;
}

//print list
//here we take head by value as we are not modifying list
void print(node* head)
{node* temp=head;
//here we want to print the last node as well
//so here we stop when temp itself is NULL (after the last node)
//(in previous function we stopped when temp->next=NULL as we wanted to stop at the last node)
 while(temp!=NULL)
    {cout<<temp->data<<" "; temp=temp->next;}
cout<<endl;
//here we are taking head by value
//so instead of a temp moving from head to null, if we simply moved head in the while loop,
//even then it would have been fine & the actual head would not be changed;
}

int length(node*head)
{int count=0;
while(head!=NULL) {count++; head= head->next;}
return count;
}

void InsertHead(node* &head, int value)
{node*n = new node(value);
n->next=head;
head=n;
}

//insert a new node at ith position
void InsertAt(node* &head, int value, int i)
{if(i==1) {InsertHead(head,value); return;}
 i-=2;
 node*temp=head;
 while(i--) temp= temp->next;
 node* n=new node(value);
 n->next=temp->next;
 temp->next=n;
}

void Printnode(node*head, int i)
{i--;
 while(i--) head=head->next;
 cout<<head->data<<" ";
}

void deletehead(node* &head)
{node*temp=head;
head=head->next;
delete temp;
}

void deletenode(node* &head, int i)
{if(i==1) {deletehead(head); return;}
 node*temp1=head;
 node*temp2=head;
 temp2=temp2->next;
 i-=2;
 while(i--) {temp1=temp1->next; temp2=temp2->next;}
 temp1->next=temp2->next;
 delete temp2;
}

int main()
{node* head= NULL;
InsertTail(head,1);
InsertTail(head,10);
InsertTail(head,25);
print(head);
InsertHead(head,19);
print(head);
InsertAt(head,100,2);
print(head);
Printnode(head,5);

deletenode(head,3);
deletenode(head,1);

cout<<endl;
print(head);
cout<<"length of list: "<<length(head);
return 0;
}
