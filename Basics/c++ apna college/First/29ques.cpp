#include <iostream>
using namespace std;
//sorting array;
//theory
//take the first element, check if rest of the array contains a shorter element.
//swap the shorter element with the first element. repeat for second element and so on.
int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int min;
    for(int i=0; i<n-1; i++)
    {min=i;
    for(int j=i+1; j<n; j++)
    if(a[j]<a[min]) min=j;
    if(a[i]!=a[min]) 
        {a[i]= a[i]+a[min];
        a[min]=a[i]-a[min];
        a[i]=a[i]-a[min];
        }
    }
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    return 0;
}