#include <iostream>
using namespace std;

bool getbit(int n, int i)
{//returns ith bit in n
return n&(1<<i);
}

int setbit(int n, int i)
{//returns n but with 1 at ith position bit of n
return n|(1<<i);
}

int clearbit(int n, int i)
{//returns n but with 0 at ith position bit of n
return n&(~(1<<i));
}

int main()
{cout<<getbit(13,2)<<" "<<setbit(13,1)<<" "<<clearbit(13,2);
return 0;
}