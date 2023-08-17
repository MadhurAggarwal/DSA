#include <iostream>
using namespace std;
/***
 * color codes:
 * red: red, orange,purple,gray
 * blue: blue,purple,green,gray
 * yellow: yellow,orange,green,gray
 * 
Also:
Red + Yellow = Orange
Red + Blue = Purple
Yellow + Blue = Green
Red + Yellow + Blue = Gray
***/

int paint(int n, bool* arr)
{int strokes=arr[0];
for(int i=1;i<n;i++)
if(arr[i]==1&&arr[i-1]==0) strokes++;
return strokes;
}

int main()
{int cases;
cin>>cases;
int k=1;
while(cases--)
{
int n;
string s;
cin>>n>>s;
bool*R(new bool[n]{});
bool*B(new bool[n]{});
bool*Y(new bool[n]{});
for(int i=0;i<n;i++)
{if(s[i]=='R'||s[i]=='O'||s[i]=='P'||s[i]=='A') R[i]=1;
 if(s[i]=='B'||s[i]=='P'||s[i]=='G'||s[i]=='A') B[i]=1;
 if(s[i]=='Y'||s[i]=='O'||s[i]=='G'||s[i]=='A') Y[i]=1;
}
int ans=paint(n,R)+paint(n,B)+paint(n,Y);
cout<<"Case #"<<k++<<": "<<ans<<endl;
}
return 0;
}