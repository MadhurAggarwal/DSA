#include<iostream>
using namespace std;
int r,c;
int a[r][c];
int ans=0;

void change_around_max(int rmax, int cmax)
{if(rmax>0&&a[rmax-1][cmax]<a[rmax][cmax]-1) 
{ans+= a[rmax][cmax]-a[rmax-1][cmax]-1;
a[rmax-1][cmax]=a[rmax][cmax]-1;}

if(cmax>0&&a[rmax][cmax-1]<a[rmax][cmax]-1) 
{ans+= a[rmax][cmax]-a[rmax][cmax-1]-1;
a[rmax][cmax-1]=a[rmax][cmax]-1;}

if(rmax<r-1&&a[rmax+1][cmax]<a[rmax][cmax]-1) 
{ans+= a[rmax][cmax]-a[rmax+1][cmax]-1;
a[rmax+1][cmax]=a[rmax][cmax]-1;}

if(cmax<c-1&&a[rmax][cmax+1]<a[rmax][cmax]-1) 
{ans+= a[rmax][cmax]-a[rmax][cmax+1]-1;
a[rmax][cmax+1]=a[rmax][cmax]-1;}
}

int main()
{cin>>r>>c;
int max=0;
for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
{cin>>a[i][j]; 
if(max<a[i][j]) max=a[i][j];}

while(max>1)
{for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
if(a[i][j]==max) change_around_max(i,j);
max--;}

cout<<ans<<endl;
return 0;
}