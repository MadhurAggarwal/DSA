#include <iostream>
using namespace std;
//prints hollow rectangle
//easy
int main()
{int row, col;
cout<<"Enter the numbers of rows and columns: ";
cin>>row>>col;
for(int i=0; i<row; i++)
{for(int j=0; j<col; j++)
    {if(i==0||i==row-1) cout<<"*";
    else if(j==0||j==col-1) cout<<"*";
    else cout<<" ";
    }
cout<<endl;
}
return 0;
}