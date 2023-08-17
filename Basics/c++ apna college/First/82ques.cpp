#include <iostream>
using namespace std;
//friends pairing problem
//each friend can either be single or paired up with anyone else. find the number of cases:
int pairing(int n)
{if(n==1||n==2) return n;
else return pairing(n-1)+(n-1)*pairing(n-2);
}

int main()
{int n;
cin>>n;
cout<<pairing(n);
return 0;
}