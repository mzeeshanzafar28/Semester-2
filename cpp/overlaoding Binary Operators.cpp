//Overlaoding Binary Operators
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>

class A
{
	int i;
	public:
		void SetI(int i)
		{
			this->i = i;
			
		}
		
		void DispI()
		{
			cout<<"i = "<<i<<endl;
		}
		
		A operator +(A a0);
		A operator -(A a0);
		
};

A A::operator +(A a0)
{
	A a5;
	a5.SetI(this->i+a0.i);
	return a5; 
}

A A::operator -(A a0)
{
	this->i = this->i - a0.i;
	return *this;
}

int main()
{

A a1,a2,a3;
a1.SetI(11);
a2.SetI(18);
a3 = a1+a2;
a3.DispI();
a3 = a1-a2;
a3.DispI();


getch();
return 0;
}

