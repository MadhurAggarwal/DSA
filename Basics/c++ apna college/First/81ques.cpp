#include <iostream>
using namespace std;
//given a board of size 2*n, find numofways of tiling it with tiles of size 2*1

int tiling(int n)
{if(n==2||n==1) return n;
else return tiling(n-1)+tiling(n-2);
}
//ans is actually nth fibonnaci number...
int main()
{int n;
cin>>n;
cout<<tiling(n);
return 0;
}