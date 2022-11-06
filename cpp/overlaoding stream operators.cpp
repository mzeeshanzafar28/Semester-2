//Overloading >> & << Operators
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
		
		friend ostream &operator <<(ostream &os, const A &a);
		friend istream &operator >>(istream &is, A &a);
		
};

ostream &operator <<(ostream &os, const A &a)
{
	os << "i = "<<a.i<<endl;
	return os;
}

istream &operator >>(istream &is, A &a)
{
	cout<<"Give i :";
	is >> a.i;
	return is;
}

int main()
{
A a1;
cin >>  a1;
cout<< a1 <<endl;

getch();
return 0;
}

