#include <iostream>
using namespace std;
//subarray with given sum...
//given an unsorted array. find a subarray that adds to given sum s.
//quite difficult, important***
int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int s;
    cin>>s;

/*    //method#1 : Brute Force Method O(n2)
    int sum,i,j;
    for(i=0; i<n; i++)
    {sum=a[i];
    for(j=i+1; sum<s; j++)
    sum+=a[j];
    if(sum==s)break;}
    if(sum==s)cout<<"Start: "<<i<<" End: "<<j-1;
    else cout<<"No Subarray Found.";
*/

    //method#2 : 2 Pointer Approach O(n)
    int i=0,j=1,sum=a[0];
    for(;;)
    {if(sum<s){sum+=a[j]; j++;}
    else if(sum>s){sum-=a[i]; i++;}
    else if(sum==s||i==n-1||j==n) break;
    }
    if(sum==s)cout<<"Start: "<<i<<" End: "<<j-1;
    else cout<<"No Subarray Found.";

    return 0;
}