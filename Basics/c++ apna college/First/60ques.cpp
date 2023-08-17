#include <iostream>
int countbinaryone(int n)
{if(n==0) return 0;
int count=1;
while(n&n-1)
{count++;
n= n&n-1;}
return count;}

int main()
{int n; 
std::cin>>n;
std::cout<<countbinaryone(n)<<std::endl;
return 0;
}