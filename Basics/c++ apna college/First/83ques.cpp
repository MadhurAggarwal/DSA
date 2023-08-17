#include <iostream>
using namespace std;
//knapsack problem
//given n items with their weight and value
//find the max total value a thief can put in his knapsack if max weight is W

int maxvalue=0;
string ans="";

void knapsack(int n, int w, int v, string s,int weight[],int value[])
{if(n==0) {if(v>maxvalue) {ans=s; maxvalue=v;}}
else if(w-weight[n-1]>=0) 
    {knapsack(n-1,w-weight[n-1],v+value[n-1],"1"+s,weight,value);
     knapsack(n-1,w,v,"0"+s,weight,value);}
else knapsack(n-1,w,v,"0"+s,weight,value);
}

int main()
{int n; cin>>n;
 int w; cin>>w;
 int weight[n],value[n];
for(int i=0;i<n;i++)
cin>>weight[i]>>value[i];
knapsack(n,w,0,"",weight,value);
cout<<ans;
return 0;
}
