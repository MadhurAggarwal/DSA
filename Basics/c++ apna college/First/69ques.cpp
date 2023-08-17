#include <iostream>
using namespace std;
//printing numbers from 1 to n using recursion:
void ascending(int n)
{if(n==1)cout<<n;
else 
{ascending(n-1);
cout<<" "<<n;
}
}
//method 1:
void descending(int n, int r)
{if(r==1) cout<<n-r+1;
else
{descending(n,r-1);
cout<<" "<<n-r+1;
}
}
//method 2:
void decr(int n)
{if(n==0) return;
cout<<n<<" ";
decr(n-1);
}

int main()
{int n;
cin>>n;
ascending(n);
cout<<endl;
descending(n,n);
return 0;
}