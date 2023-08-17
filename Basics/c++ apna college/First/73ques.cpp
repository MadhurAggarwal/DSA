#include <iostream>
using namespace std;
//tower of hanoi problem:
//given n rings in a source peg. place all the pegs to destination peg using the auxillary peg.
//note that number of steps is (2^n)-1
int i=1;

void towerofhanoi(int n, char a, char b, char c)
{if(n==1) {cout<<i++<<". "<<a<<" to "<<b<<endl; return;}
towerofhanoi(n-1,a,c,b);
cout<<i++<<". "<<a<<" to "<<b<<endl;
towerofhanoi(n-1,c,b,a);
}

int main()
{int n;
cin>>n;
cout<<"Move top peg from: "<<endl;
towerofhanoi(n,'A','B','C');
return 0;
}