#include <iostream>
using namespace std;
// object oriented programming
class student
{string name;
public:
 int age;
 char gender; 

//default constructor
student()
{cout<<"Default Constructor"<<endl;
}

//parameterised constructor
student(string s, int a, char ch)
{cout<<"Parameterised constructor 1.0"<<endl;
 name=s;
 age=a;
 gender=ch;
}

//another parameterised constructor
student(string s)
{cout<<"Parameterised constructor 2.0"<<endl;
 name=s;
}

//copy constructor
student(student &a)
{cout<<"Copy Constructor"<<endl;
 name=a.name;   //here name is private but a.name still works(inside class)
 age=a.age;
 gender=a.gender;
}
//we can also use student x=a; to copy data of a into x;

 void setname(string s)
 {name=s;
 }

 void getname()
 {cout<<name;
 }

 void printinfo()
 {cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Gender: "<<gender<<endl;
  cout<<endl;
 }
};

int main()
{student a;
string s="Madhur";
a.setname(s);
a.age=19;
a.gender='M';
a.printinfo();

student b("Abc", 20, 'F');
b.printinfo();

student c("Pqr");
c.age=10;
c.gender='F';
c.printinfo();

student d(b);
d.printinfo();
d.age=50;
d.printinfo();
b.printinfo();

student e=c;
e.printinfo();
e.age=100;
e.printinfo();
c.printinfo();
return 0;
}