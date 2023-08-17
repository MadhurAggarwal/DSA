#include <iostream>
using namespace std;
//largest word in a sentence.
//incorrect... the last letter becomes space somehow?
int main()
{int n;
cin>>n;
cin.ignore();
char a[n+1];
cin.getline(a,n);

int max=0, num=0, end;
for(int i=0; i<n; i++)
{if(a[i]!=' ') num++;
else num=0;
if(num>max) {max=num; end=i;}
}

cout<<max<<endl;
for(int i=end-max+1; i<=end; i++)
cout<<a[i];
cout<<"abc";
cout<<endl;
return 0;
}