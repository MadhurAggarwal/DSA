#include <iostream>
using namespace std;
//to find the number of ways of reaching from start to n using a dice (ie, can traverse upto steps of 6)
/***
 * t(1)=1
 * t(2)=2
 * t(3)=4
 * t(4)=8
 * t(5)=16
 * t(6)=32
 * upto 6, there are 2^n ways 
 * after that use recursion
 * t(7)=63
 ***/

int numofways(int n)
{if(n<=6) return 1<<(n-1);
int ans=0;
for(int i=1; i<=6;i++)
ans+=numofways(n-i);
return ans;
}

//method 2:
int countpaths(int s,int e)
{if(s>e) return 0;
if(s==e) return 1;
int ans=0;
for(int i=1; i<=6;i++)
ans+=countpaths(s+i,e);
return ans;
}

int main()
{int n;
cin>>n;
//cout<<numofways(n);
cout<<countpaths(0,n);
return 0;
}