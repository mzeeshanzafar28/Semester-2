//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
namespace NS
{
string s1("s1 from Namespace called");
int p1 = 0;
void f1()
{
	cout<<s1<<endl;
	}	
}

using namespace NS;

int main()
{

cout<<NS::s1<<endl;
cout<<p1<<endl;
NS::f1();

getch();
return 0;
}

