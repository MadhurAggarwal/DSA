#include <iostream>
using namespace std;

int main()
{int testcases;
 cin>>testcases;
 int case_number=1;
 while(testcases--)
 {int n; cin>>n;
  int*input=new int[n];
  int max=0;
  for(int i=0;i<n;i++)
  {cin>>input[i];
   if(max<input[i]) max=input[i];}
  int*arr(new int[n]{});
  int*extra(new int[max+2]{});
  
  for(int i=0;i<n;i++)
  {if(i>0) arr[i]=arr[i-1];
   if(input[i]>arr[i])
      {arr[i]++;
       extra[input[i]+1]--;
      }
   int x=arr[i];
   if(extra[x]<0) {arr[i]--; extra[x]++;}
  }

  cout<<"Case #"<<case_number++<<": ";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  cout<<endl;

  delete[] input;
  delete[] arr;
  delete[] extra;
 }
 return 0;
}