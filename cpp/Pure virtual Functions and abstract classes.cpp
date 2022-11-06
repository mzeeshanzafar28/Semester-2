//Pure virtual Functions and abstract classes
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class A
{
	public:
		virtual void f1() = 0;
};

class B  : public A
{
	public:
		void f1()
		{
			cout<<"f1 of B called"<<endl;
		}
};

class C : public A
{
	public : 
		void f1()
		{
			cout<<"f1 of c called"<<endl;
		}
};



int main()
{


A *ptr;
B b;
C c;
 ptr = &b;
  ptr->f1();
  ptr = &c;
  ptr->f1();

getch();
return 0;
}

