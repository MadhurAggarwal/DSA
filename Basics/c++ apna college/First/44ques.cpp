#include <iostream>
using namespace std;
//Maximum Sum subarray...
//Kadane's Algorithm
//Theory, IMPORTANT****

int main()
{int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

//first assume array has atleast one non negative number
//so minimum ans would be 0

//keep adding numbers to sum
//update max if required
//if sum goes below minimum ans{0} then set it as 0
//max is the ans

//now handle the case when array contains only -ve numbers


    //Method#3 Kadane's Algorithm:
    int sum=0, max=a[0];
    for(int i=0; i<n; i++)
    {sum+=a[i];
    if(sum<0) sum=0;
    if(sum>max) max=sum;
    }

//correcting the above algorithm: it will give 0 as ans if max sum was negative...
    int x=a[0];
    for(int i=1; i<n; i++)
    if(x<a[i]) x=a[i];
    if(x<0) max=x;

cout<<max;
return 0;
}