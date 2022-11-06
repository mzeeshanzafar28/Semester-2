//Virtual Base Class
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class A
{
	protected:
		int x;
		
};

class B : virtual public A
{
	
};

class C : virtual public A
{
	
};

class D : public B, public C
{
	public:
	int GetData()
	{
		return x;
	}
	
	void SetData(int x)
	{
		this->x = x;
	}
};

int main()
{

D d;
d.SetData(50);
cout<<"X = "<<d.GetData()<<endl;
getch();
return 0;
}

