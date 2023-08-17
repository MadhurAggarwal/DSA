#include <iostream>
using namespace std;

int main()
{int test_cases;
cin>>test_cases;
int num=1;

while(test_cases>0)
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
a[i]=1;
string s;
cin>>s;

int i=n-1, j=i-1;
while(i>=0)
{if(s[j+1]<=s[j] || j==-1)
    {while(i>j) {if(i<n-1 && a[i+1]>1) a[i]= a[i+1]-1; i--;}
    j--;}
else
    {while(j>=0 && s[j+1]>s[j]) {a[i]++; j--;}
    i--;}
}

cout<<"Case #"<<num<<": ";
for(int k=0; k<n; k++)
cout<<a[k]<<" ";
cout<<endl;
test_cases--;
num++;
}

return 0;
}