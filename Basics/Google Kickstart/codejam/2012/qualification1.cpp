#include <iostream>
#include <string>
using namespace std;

int main()
{string input="ejp mysljylc kd kxveddknmc re jsicpdrysi rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd de kr kd eoya kw aej tysr re ujdr lkgc jv";

 string output="our language is impossible to understand there are twenty six factorial possibilities so it is okay if you want to just give up";
 char arr[26];
 for(int i=0;i<input.length();i++)
 arr[input[i]-'a'] =output[i];
 arr[25]='z';

 int test_cases;
 cin>>test_cases;
 cin.ignore();
 int case_number=1;
 while(test_cases--)
    {string ques,ans="";
     getline(cin,ques);
     for(int i=0;i<ques.length();i++)
      {if(ques[i]==' ') ans+=ques[i];
       else ans+=arr[ques[i]-97];
      }
     cout<<"case #"<<case_number++<<": "<<ans<<endl;
    }
 return 0;
}