#include <iostream>
using namespace std;
bool isvolwel(char ch)
{switch(ch)
    {case 'a': return 1;
     case 'e': return 1;
     case 'i': return 1;
     case 'o': return 1;
     case 'u': return 1;
     case 'A': return 1;
     case 'E': return 1;
     case 'I': return 1;
     case 'O': return 1;
     case 'U': return 1;
     default: return 0;
    }
}

int main()
{int test_cases;
 cin>>test_cases;
 cin.ignore();
 int case_number=1;
 while(test_cases--)
 {string ques;
  cin>>ques;
  char ch=ques[ques.length()-1];
  cout<<"Case #"<<case_number++<<": ";
  if(ch=='y'||ch=='Y') cout<<ques<<" is ruled by nobody."<<endl;
  else if(isvolwel(ch)) cout<<ques<<" is ruled by Alice."<<endl;
  else cout<<ques<<" is ruled by Bob."<<endl;
 }
 return 0;
}