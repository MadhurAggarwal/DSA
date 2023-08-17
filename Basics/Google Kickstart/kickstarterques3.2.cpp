#include<iostream>
using namespace std;

int ans;
void change_around_max(int r, int c, int rmax, int cmax, int **a)
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
{int test_cases;
cin>>test_cases;
int num=1;
while(test_cases>0) {
int r,c;
cin>>r>>c;

//creating a 2d dynamic array
int**a= new int*[r];
for(int i=0; i<r; i++)
a[i]= new int[c];

//logic
ans=0;
int max=0;
for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
{cin>>a[i][j]; 
if(max<a[i][j]) max=a[i][j];}

while(max>1)
{for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
if(a[i][j]==max) change_around_max(r,c,i,j,a);
max--;}

//deallocate storage
for(int i=0; i<r; i++)
delete[] a[i];
delete[] a;

cout<<"Case #";
cout<<num++<<": "<<ans<<endl;
test_cases--;
}
return 0;
}