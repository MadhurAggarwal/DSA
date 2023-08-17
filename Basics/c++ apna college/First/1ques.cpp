#include <iostream>
using namespace std;
//prints a rectangle
//easy
int main(){
    int row,col;
    cout<<"Enter the value of row and columns: ";
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {for(int j=0; j<col; j++)
    cout<<"*";
    cout<<endl;
    }
return 0;
}