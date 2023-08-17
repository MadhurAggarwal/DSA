#include <iostream>
#include <cstring>
using namespace std;

int find_last_dog(int n,string s)
{int x=-1;
 for(int i=n-1;i>=0;i--)
 if(s[i]=='D') {x=i; break;}
 return x;
}

string func(int a,int d,int c,int m,string s)
{int n=find_last_dog(a,s);
 if(n==-1) return "YES"; //no dogs
 
 for(int i=0;i<=n;i++)
 {if(s[i]=='C')
    {if(c>0) c--;
     else return "NO";  //hungry cat interupts dogs
    } 
  else 
    {if(d<0) return "NO"; //Unfed dog
     else {d--; c+=m;}
    }
 }
 return "YES"; //last dog fed
}

int main()
{int t;
 cin>>t;
 int i=1;
 while(t--)
 {int n,d,c,m;
  string s;
  cin>>n>>d>>c>>m>>s;
  cout<<"Case #"<<i++<<": "<<func(n,d,c,m,s)<<endl;
 }
 return 0;
}