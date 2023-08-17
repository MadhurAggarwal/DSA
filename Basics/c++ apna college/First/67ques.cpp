#include <iostream>
using namespace std;

int fibonnaci(int n)
{if(n<2) return n;
return fibonnaci(n-1)+fibonnaci(n-2);
}

int main()
{int n;
cin>>n;
cout<<fibonnaci(n);
return 0;
}