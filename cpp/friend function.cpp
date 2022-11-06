//Friend Function
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
		friend void function1();
};
void function1()
{
	A a;
	a.i=25;
	cout<<"a.i in friend function function1() = "<<a.i<<endl;
}

int main()
{

function1();


getch();
return 0;
}

