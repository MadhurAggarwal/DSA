#include <iostream>
using namespace std;
//find how many numbers less than n are divisible by both a,b
int lcm(int a,int b)
{int x=max(a,b), y=min(a,b);
while(y)
{int z=x%y;
x=y;
y=z;}
return (a*b)/x; //lcm*gcd=product of numbers
}

int main()
{int n,a,b;
cin>>n>>a>>b;
//using inclusion-exclusion principle:
//ans= numbers divisible by a + divisible by b - divisible by lcm(a,b)
int c=lcm(a,b);
cout<<(n/a)+(n/b)-(n/c);
return 0;
}