#include <iostream>
#include <string>
using namespace std;
//keypad problem:
//print all the possible words corresponding to entered number
//this is incomplete:
/***
 * 2: abc
 * 3: def
 * 4: ghi
 * 5: jkl
 * 6: mno
 * 7: pqrs
 * 8: tuv
 * 9: wxyz
 ***/
void keypadlogic(string s[10],string input)
{for(int x=0; x<input.length(); x++)
{int i=
for(int j=0; j<s[i].length(); j++) cout<<s[i][j]<<endl;
}}

int main()
{string s[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string input;
cin>>input;
return 0;
}

/***
 * input string x="23"
 * append s[x[0]-'0'][0 to 2]+s[x[1]-'0'][0 to 2]
 * 
 * //for loop calculating each x[i]
 * //for each x[i] cout jth number
 * //now recrusive call for different x[i]
 * //after this endl and move to another j;
 ***/

