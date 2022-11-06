//friend class
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>

class A
{
	private:
		int i;
		friend class B;
};

class B
{
	public:
	void function1()
	{
		A a1;
		a1.i = 22;
		cout<<"a1.i in function1() = "<<a1.i<<endl;
	}
	
	void function2()
	{
		A a1;
		a1.i = 25;
		cout<<"a1.i in function2() = "<<a1.i<<endl;
	}
};

int main()
{
B b;
b.function1();
b.function2();


getch();
return 0;
}

