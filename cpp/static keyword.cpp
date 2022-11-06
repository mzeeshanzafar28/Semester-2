//Static Keyword
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>

class A
{
	public:
		static int i;
		static void f1()
		{
			i++;
			cout<<"f1() called"<<endl;
		}
};

int A::i=0;

int main()
{
	A a;
	a.i = 5;
	A a2;
	A::i = 7;
	cout<<"a.i = "<<a.i<<"\nA::i = "<<A::i<<"\na2.i = "<<a2.i<<endl;
	A::f1();
	a.f1();
	a2.f1();
	cout<<"a.i = "<<a.i<<"\nA::i = "<<A::i<<"\na2.i = "<<a2.i<<endl;


getch();
return 0;
}

