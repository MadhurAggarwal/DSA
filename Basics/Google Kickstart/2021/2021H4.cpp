#include <iostream>
using namespace std;
//n: number of events
//q: number of queries
//event[i][j]: i is the event number
//j=0: parent event; j=1: P if parent event occured; j=2: P if parent event did not occur;
//query[x][y]: x is the query number
//y=0 and y=1 are the 2 queries;
//P[i] stores the probability of event i;


//P[i]= event[i][1]*P[(event[i])]
void probability(int i, float*P, float**event, bool*check)
{int x=event[i][0];
 if(check[x-1]==0) probability(x-1,P,event,check);
 //cout<<event[i][1]/1000000<<"*"<<P[x-1]<<" + "<<event[i][2]/1000000<<"*"<<1-P[x-1]<<endl;
 P[i]= event[i][1]*P[x-1] + event[i][2]*(1-P[x-1]);
 P[i]/=1000000;
 check[i]=1;
 //cout<<"Probability of "<<i+1<<" is "<<P[i]<<endl;
}


int main()
{int cases;
cin>>cases;
int z=1;
while(cases--)
{    
int n,q;
cin>>n>>q;
float**event=new float*[n];
for(int i=0;i<n;i++)
event[i]=new float[3];
for(int i=0;i<n;i++)
for(int j=0;j<3;j++)
{if(i==0&&j>0) continue;
cin>>event[i][j];}

int**query=new int*[q];
for(int i=0;i<q;i++)
query[i]=new int[2];
for(int i=0;i<q;i++)
for(int j=0;j<2;j++)
cin>>query[i][j];

float*P(new float[n]{});
P[0]=event[0][0]/1000000;
bool*check(new bool[n]{});
check[0]=1;

cout<<"Case #"<<z++<<": "<<endl;

for(int i=0;i<q;i++)
{int a=query[i][0], b=query[i][1];
cout<<a<<" "<<b<<endl;
//we want to find p if a, b both occur
//so all those events whose parent event is a or b, their p is to be marked
for(int i=1;i<n;i++)
if(event[i][0]==a||event[i][0]==b) 
{P[i]=event[i][1]/1000000;
check[i]=1;}

if(check[a-1]==0) probability(a-1,P,event,check);
if(check[b-1]==0) probability(b-1,P,event,check);
float ans= P[a-1]*P[b-1];
ans
cout<<ans%(1000000007);

for(int i=1;i<n;i++)
check[i]=0;
cout<<endl<<endl;
}
cout<<endl;

delete[] P;
for(int i=0;i<q;i++)
delete[] query[i];
delete[] query;
for(int i=0;i<n;i++)
delete[] event[i];
delete[] event;
}
return 0;
}