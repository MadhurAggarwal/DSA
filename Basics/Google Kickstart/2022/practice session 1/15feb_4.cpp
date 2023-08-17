#include <iostream>
using namespace std;

int main()
{int test_cases;
 cin>>test_cases;
 int case_number=1;
 while(test_cases--)
 {int n; cin>>n;
  int m; cin>>m;
  int* arr=new int[n];
  int total=0;
  for(int i=0;i<n;i++)
  {cin>>arr[i];
   total+=arr[i];
  }
  cout<<"Case #"<<case_number++<<": ";
  cout<<total%m<<endl;
 }
 return 0;
}