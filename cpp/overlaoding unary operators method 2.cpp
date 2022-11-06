//Overloading Unary Operators .... method 2
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
			cout<<" i ="<<i<<endl;
		}
	
	A operator ++(void);
	A operator ++(int);
	
};

A A::operator ++(void)
{
	++i;
	return *this;
	A a5;
	a5.SetI(i);
	return a5;
}

A A::operator ++(int)
{
	i++;
	return *this;
	A a5;
	a5.SetI(i);
	return a5;
}


int main()
{
A a;
a.SetI(18);
a.DispI();
++a;
a.DispI();
a++;
a.DispI();
A ax;
ax = a++;
ax.DispI();

getch();
return 0;
}

