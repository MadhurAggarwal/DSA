#include <iostream>
using namespace std;
//given 2 linked list
//check if they intersect or not

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

int length(node* head)
{int l=0;
 while(head) {l++; head=head->next;}
 return l;
}

//attatching the last of second list to ith node of first list 
void intersectlists(node* first, node* second, int i)
{int n=1;
 while(n<i) {first=first->next; n++;}
 while(second->next) second=second->next;
 second->next=first;
}

//initially, first and second are the heads of 2 linked lists
//after insersection, both lists would become same
//so instersection point can only be at a node after which lengths of both lists are same
bool findintersection(node* first, node* second)
{int a=length(first);
 int b=length(second);
 if(a>b) while(a>b){a--; first=first->next;}
 else while(b>a) {b--; second=second->next;}
 while(a--)
    {if(first==second) {cout<<"Intersection at "<<first->data<<endl; return 1;}
     first=first->next;
     second=second->next;
    }
cout<<"No intersection found"<<endl;
return 0;
}

int main()
{node* head1=NULL;
 node* head2=NULL;
 for(int i=20; i<=30;i++)
 insertnode(head1,i);
 cout<<"List 1: "; print(head1);
 for(int i=45;i<=50;i++)
 insertnode(head2,i);
 cout<<"List 2: "; print(head2);
 findintersection(head1,head2);
 intersectlists(head1,head2,6);
 cout<<endl<<"After intersection: "<<endl;
 cout<<"List 1: "; print(head1);
 cout<<"List 2: "; print(head2);
 findintersection(head1,head2);
 return 0;
}