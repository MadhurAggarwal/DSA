#include <iostream>
int ispower2(int n)
{return n&&(!(n&n-1));}

int main()
{int n;
std::cin>>n;
std::cout<<ispower2(n)<<std::endl;
return 0;
}