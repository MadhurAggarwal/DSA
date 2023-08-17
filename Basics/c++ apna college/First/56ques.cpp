#include <iostream>
using namespace std;
//largest word in a sentence...

int main()
{int n;
cin>>n;
cin.ignore();
char a[n+1];
cin.getline(a,n);

int i=0;
int sum=0, max=0;
int st=0, maxst=0;
for(;;)
{if(a[i]==' ' ||a[i]=='\0') {if(max<sum) {max=sum; maxst=st;} sum=0; st=i+1;} 
else sum++;
if(a[i]=='\0') break;
i++;
}

cout<<max<<endl;
for(int i=0; i<max; i++)
cout<<a[i+maxst];

return 0;
}