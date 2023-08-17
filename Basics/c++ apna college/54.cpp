#include <iostream>
using namespace std;
//inheritance: 
//private elements can be accesed from same class only and are not inherited;
//protected elements can be accessed from base & derived class only;
//public elements can be accessed even outside classes; 

//Single Inheritance:
//B inherits from A
class A1
{private:   int a;
protected:  int b;
public:
int c;
void funcA1()
{cout<<"FuncA1"<<endl;}
};
class B1: public A1
{private:
protected:
public:
void funcB1()
{cout<<"FuncB1"<<endl;}
};

//Multiple Inheritance:
//C inherits from both A and B
class A2
{public:
void funcA2()
{cout<<"FuncA2"<<endl;}
};
class B2
{public:
void funcB2()
{cout<<"FuncB2"<<endl;}
};
class C2: public A2,public B2
{public:
void funcC2()
{cout<<"FuncC2"<<endl;}
};

//Multi-Level Inheritance:
//C inherits from B which inherits from A
class A3
{protected:
void funcA3()
{cout<<"funcA3"<<endl;}
};
class B3: public A3
{public: 
void funcB3()
{cout<<"funcB3"<<endl; funcA3();}
};
class C3: public B3
{public:
void funcC3()
{cout<<"funcC3"<<endl;}
};

//Hybrid Inheritance:
//mixture of different types of inheritance

//Hierarchial Inheritance:
//hierarchy is established

int main()
{B1 x;
x.funcB1();
x.funcA1();
C2 y;
y.funcB2();
y.funcA2();
C3 z;
z.funcC3();
z.funcB3();
return 0;
}