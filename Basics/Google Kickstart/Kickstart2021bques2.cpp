#include <iostream>
using namespace std;

int main()
{int testcases;
cin>>testcases;
int num=1;
while(testcases>0)
{
int n;
cin>>n;
long a[n];
for(int i=0; i<n; i++)
cin>>a[i];

long x=a[1]-a[0], max=2, total=2, count=0, anscount=0;
for(int i=2; i<n; i++)
{if(a[i]-a[i-1]==x) max++;
else if(i<n-1 && count==0 && a[i+1]-a[i-1]==2*x) {max+=2; i++; count=1;}
//else if(i<n-2 && count==0 && a[i+1]-a[i-1]==2*(a[i+2]-a[i+1])) {max+=2; i++; count=1;}
else {max=2; x=a[i]-a[i-1]; count=0;}
if(total<max) {total=max; anscount=count;}
}
if(anscount==0 && total<n) total++;

cout<<"Case #"<<num<<": "<<total<<endl;
num++;
testcases--;
}
return 0;
}