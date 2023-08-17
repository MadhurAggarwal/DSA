#include <iostream>
using namespace std;

int ans;
void check(int a, int b)
{if(2*a<=b) ans+=a-1;
else ans+= (b/2) -1;
}

void find_consecutive_ones(int r, int c, int i, int j, bool**a)
{int left=1,right=1,up=1,down=1;
for(int x=i+1; x<r; x++) {if(a[x][j]==0) break; else down++;}
for(int x=i-1; x>=0; x--){if(a[x][j]==0) break; else up++;}
for(int x=j+1; x<c; x++) {if(a[i][x]==0) break; else right++;}
for(int x=j-1; x>=0; x--){if(a[i][x]==0) break; else left++;}

if(left>1&&up>1) check(left,up);
if(left>1&&down>1) check(left,down);
if(right>1&&up>1) check(right,up);
if(right>1&&down>1)check(right,down);
if(left>1&&up>1) check(up,left);
if(left>1&&down>1) check(down,left);
if(right>1&&up>1) check(up,right);
if(right>1&&down>1)check(down,right);
}


int main()
{int test_cases;
cin>>test_cases;
int num=1;
while(test_cases>0) {   
ans=0; 
int r,c;
cin>>r>>c;

//creating a 2d dynamic array
bool**a= new bool*[r];
for(int i=0; i<r; i++)
a[i]= new bool[c];

//initialising
for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
cin>>a[i][j];

//every one in the array can be an end point
for(int i=0; i<r; i++)
for(int j=0; j<c; j++)
if(a[i][j]) find_consecutive_ones(r,c,i,j,a);

//deallocate storage
for(int i=0; i<r; i++)
delete[] a[i];
delete[] a;

//output
cout<<"Case #";
cout<<num++<<": "<<ans<<endl;
test_cases--;
}
return 0;
}