#include <iostream>
using namespace std;
//Polymorphism
//compile time: Func & Operator Overloading
//run time: virtual functions

//Function Overloading
class A
{public:
void afunc()
{cout<<"Function with no parameters"<<endl;}
void afunc(double y)
{cout<<"Function with double parameter"<<endl;}
void afunc(int x)
{cout<<"Function with int parameter"<<endl;}
};

//Operator Overloading
class complex
{public:
int real,img;
//default constuctor
complex() {}
//parameterised constructor
complex(int r,int i)
{real=r; img=i;}
//operator definiton
complex operator + (complex const &z)
{complex ans;
ans.real= z.real + real;
ans.img= z.img + img;
return ans;}
//printing
void print()
{cout<<real<<"+"<<img<<"i";}
};

//Virtual functions
class base
{public:
void print() {cout<<"This is print function of base class."<<endl;}
virtual void display() {cout<<"This is display function of base class"<<endl;}
};
class derived: public base
{public:
void print() {cout<<"This is print funtion of derived class."<<endl;}
void display() {cout<<"This is display function of derived class"<<endl;}
};

int main()
{A a;
a.afunc();
a.afunc(4);
a.afunc(3.23);
cout<<endl;

complex c1(12,7), c2(6,7);
complex c3= c1+c2;
c3.print();
cout<<endl;

base *p;
derived d;
d.display();
d.print();
p=&d;
//we use arrow operator instead of dot operator for pointers
//non-virtual function, binded at compile time
p->print();
//virtual function, binded at run time
p->display();

return 0;
}
