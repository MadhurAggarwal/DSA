#include<iostream>
using namespace std;
//to find 2 distinct numbers in an array, apart from which every other number exists in pair...
int main()
{//input
int n; cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

//xorsum
int sum=a[0];
for(int i=1; i<n; i++)
sum= sum^a[i];

//first number:
int pos=0;
while(!(sum&(1<<pos))) pos++;
int first=sum, second;
for(int i=0; i<n; i++)
if(!(a[i]&(1<<pos))) first= first^a[i];

//second number:
second= sum^first;

//output:
cout<<first<<" "<<second;
return 0;
}