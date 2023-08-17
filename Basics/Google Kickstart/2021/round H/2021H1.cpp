#include <iostream>
using namespace std;
//it is given that string f is sorted

void test_case1(string s, string f)
{//a=97, z=122;
//if it takes i operations to convert 'a' to 'x' by increasing it
//then it takes 26-i operations to convert 'a' to 'x' by decreasing it.
int ans=0;
for(int i=0;i<s.size();i++)
{int temp;
if(s[i]>=f[0]) temp=s[i]-f[0];
else temp=f[0]-s[i];
if(temp<=(26-temp)) ans+=temp;
else ans+=(26-temp);
}
cout<<ans<<endl;
}

//test case 2
//for each s[i] find k and 26-k for each f[i] and choose the smallest
void test_case2(string s, string f)
{int ans=0;
for(int i=0;i<s.length();i++) 
{int min=26;
for(int j=0;j<f.length();j++)
    {int a=s[i]-f[j];
    if(a<0) a*= -1;
    if(a>13) a=26-a;
    if(a<min) min=a;
    }
ans+=min;
}
cout<<ans<<endl;
}

int main()
{int cases;
cin>>cases;
int i=1;
while(cases--)
{string s,f;
cin>>s>>f;
//for each element of s, find converting to which element of f is easiest.
//converting to an element can be by increasing or decreasing
//(like b is easy to be converted to z than h);
cout<<"Case #"<<i++<<": ";
if(f.size()==1) test_case1(s,f);
else test_case2(s,f);
}
return 0;
}