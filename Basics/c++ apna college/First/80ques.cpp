#include <iostream>
using namespace std;
//find number of paths from 0,0 to n,n
//you can only move forward or upward, one step at a time:

int findpaths(int forward, int upward, int ans,int n)
{if(forward<n&&upward<n)
return findpaths(forward+1,upward,ans,n)+findpaths(forward,upward+1,ans,n);
else if(forward<n) return findpaths(forward+1,upward,ans,n);
else if(upward<n) return findpaths(forward,upward+1,ans,n);
else return ans+1;
}

int main()
{int n;
cin>>n;
cout<<findpaths(1,1,0,n);
}