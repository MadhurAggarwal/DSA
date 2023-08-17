#include <iostream>
using namespace std;
//Multiply matrix of order n1*n2 and n2*n3
//easy, important***
int main()
{int n1, n2, n3;
cin>>n1>>n2;

int a[n1][n2];
for(int i=0; i<n1; i++)
for(int j=0; j<n2; j++)
cin>>a[i][j];

cin>>n2>>n3;
int b[n2][n3];
for(int i=0; i<n2; i++)
for(int j=0; j<n3; j++)
cin>>b[i][j];

int c[n1][n3], sum=0;

for(int i=0; i<n1; i++)
for(int k=0; k<n3; k++)
{for(int j=0; j<n2; j++)
sum+= a[i][j]*b[j][k];
c[i][k]=sum;
sum=0;}

for(int i=0; i<n1; i++)
{for(int j=0; j<n3; j++)
cout<<c[i][j]<<" ";
cout<<endl;}

return 0;
}