#include <iostream>
using namespace std;
//Pair sum problem...
//Online method...

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
int k;
cin>>k;

    //Method#3 : 2 pointer approach:
    //this works for sorted array only...
    int low=0, high=n-1;
    for(int i=0; i<n; i++)
    {if(a[low]+a[high]==k) cout<<a[low++]<<" "<<a[high]<<endl;
    if(a[low]+a[high]<k) low++;
    if(a[low]+a[high]>k) high--;
    if(low==high) break;}

return 0;
}