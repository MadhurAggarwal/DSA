#include <iostream>
using namespace std;
//b-r==0 : red first, last move blue
//b-r==1 : blue first, last move blue

bool possibility(int n, char**arr)
{int x=0;
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 {if(arr[i][j]=='B') x++;
  else if(arr[i][j]=='R') x--;
 }
 if(x==0||x==1||x==-1) return 1;
 return 0;
 //also the case when one wins and the other still moves
}

bool bluewins(int n, char**arr)
{//a horizontal line of 'B'
 //if blue wins and total blue<toal red then impossible
}

bool redwins(int n, char**arr)
{//a vertical line of 'R'
 //if red wins and total red<total blue then impossible
}

int main()
{//input
 int test_cases;
 cin>>test_cases;
 int case_number=1;
 while(test_cases--)
 {int n;
  cin>>n;
  char** arr=new char*[n];
  for(int i=0;i<n;i++)
  arr[i]=new char[n];
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
  cin>>arr[i][j];
  
  //logic
  cout<<"Case #"<<case_number++<<": ";
  cout<<"Impossible"<<endl;
  cout<<"Blue wins"<<endl;
  cout<<"Red wins"<<endl;
  cout<<"Nobody wins"<<endl;

  //output
  for(int i=0;i<n;i++)
  delete[] arr[i];
  delete[] arr;
 }
 return 0;
}