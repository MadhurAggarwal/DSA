#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//reduce an array:
//replace every element of an array with its rank in the array
//like 0 for smallest element, n-1 for the largest element
bool mycompare(pair<int,int>a,pair<int,int>b)
{return a.first<b.first;
}

int main()
{int n; cin>>n;
int*arr=new int[n];
for(int i=0;i<n;i++) cin>>arr[i];

vector <pair<int,int>> v;
for(int i=0;i<n;i++)
v.push_back(make_pair(arr[i],i));
sort(v.begin(),v.end(),mycompare);

for(int i=0;i<n;i++)
arr[v[i].second]=i;

for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}