#include <iostream>
using namespace std;

int main()
{int test_cases;
 cin>>test_cases;
 int case_number=1;
 while(test_cases--)
 {int n;
  cin>>n;
  int max=0;
  int* input= new int[n];
  //input[i] stores the number of citations on ith paper
  for(int i=0;i<n;i++)
    {cin>>input[i];
     if(max<input[i]) max=input[i];
    }
  int* arr(new int[max+1]{});
  cout<<"Case #"<<case_number++<<": ";
  int ans=0;
  //arr[j] stores number of papers with j citations, till first i papers
  for(int i=0;i<n;i++)
  {for(int j=ans;j<=input[i];j++) 
   {arr[j]++; if(j==arr[j]) ans++;}
   cout<<ans<<" ";
  }
  cout<<endl;
 }
 return 0;
}