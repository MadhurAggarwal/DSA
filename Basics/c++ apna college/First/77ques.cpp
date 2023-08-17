#include <iostream>
#include <string>
using namespace std;
//confusing question:
string s[10]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypadlogic(string input, string ans, int i)
{if(i==input.length()) cout<<ans<<endl;
else
{int j=input[i]-'0';
for(int k=0; k<s[j].length();k++)
keypadlogic(input,ans+s[j][k],i+1);
}
}

int main()
{string input;
cin>>input;
keypadlogic(input,"",0);

return 0;
}