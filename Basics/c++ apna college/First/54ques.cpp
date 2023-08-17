#include <iostream>
using namespace std;
//check pallindrome
//easy
int main()
{
char a[100];
cin>>a;

int n=0;
while(a[n]!='\0') n++;
//array size==n+1 && a[n]=='\0'

bool flag=0;
for(int i=0; i<n; i++)
if(a[i]!=a[n-1-i]) {flag=1; break;}
if(flag==1) cout<<"Not Pallindrome."<<endl;
else cout<<"Pallindrome."<<endl;
return 0;
}