#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//n is number of binary strings
//m is number of forbidden strings
//p is length of each string

bool mycompare(pair<int,int> a,pair<int,int> b)
{return a.first<b.first;
}

int main()
{int test_cases;
 cin>>test_cases;
 int case_number=1;
 while(test_cases--)
 {int n,m,p;
  cin>>n>>m>>p;
  string*input=new string[n];
  string*forbidden=new string[m];
  for(int i=0;i<n;i++)
  cin>>input[i];
  for(int i=0;i<m;i++)
  cin>>forbidden[i];

  //v.first stores number of ones
  //v.second stores option number
  vector<pair<int,int>> v;
  for(int i=0;i<p;i++)
  {int ones=0;
   for(int j=0;j<n;j++)
   if(input[j][i]=='1') ones++;
   v.push_back(make_pair(ones,i));
  }

  string ans="";
  int complaints=0;
  for(auto element: v)
  {if(2*element.first>=p) {ans+='1'; complaints+= p-element.first;}
   else {ans+='0'; complaints+=element.first;}
  }
  
  bool check=0;
  for(int i=0;i<m;i++)
  if(ans==forbidden[i]) {check=1; break;}
  if(check==0) goto next;

  //v.first= |ones-zeros|
  //if we invert binary at v.secondth position, then complaints increase by v.first
  for(auto element: v)
  {int x= p-2*element.first;
   if(x<0) x*= -1;
   element.first=x;
  }
  //sorted vector from min v.first to max
  sort(v.begin(),v.end(), mycompare); 

  
  next:
  cout<<"Case #"<<case_number++<<": ";
  cout<<ans<<endl;
 }
 return 0;
}