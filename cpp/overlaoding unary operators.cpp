//Operator Overloading
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
		public:
			void SetI(int i)
			{
				this->i = i;
			}
			
			void DispI()
			{
				cout<<"i = "<<i<<endl;
			}
			
			A operator ++(void);
			A operator ++(int);
			
};

A A::operator ++(void)
{
	++i;
	return *this;
}

A A::operator ++(int)
{
	i++;
	return *this;
}

int main()
{

A a1;
a1.SetI(24);
a1.DispI();
++a1;
a1.DispI();
a1++;
a1.DispI();

getch();
return 0;
}

