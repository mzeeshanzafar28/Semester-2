//Early and Late binding/Runtime Polymorphism
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class A
{
public : 
 	 virtual void f1()
	 {
	 	cout<<"f1 of A called"<<endl;
	 }
};

class B : public A
{
	void f1()
	{
		cout<<"f1 of B called"<<endl;
	}
};

int main()
{
	A *ptr;
	A a2;
	B b;
	ptr = &a2;
	ptr->f1();
	ptr = &b;
	ptr->f1();



getch();
return 0;
}

