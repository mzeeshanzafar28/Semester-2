//Virtual Destructors
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
protected: 
	int i;
public:
	virtual ~A()
	{
		cout<<"Destructor of A called"<<endl;
	}
};

class B : public A
{
public:
		~B()
		{
			cout<<"Destructor of B called"<<endl;
		}
		
};

int main()
{

	A *a;
	B *b;
	a = b;
	delete[]a;

getch();
return 0;
}

