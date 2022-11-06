//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>

namespace TableOf5
{
	int i = 5 , j = 1;
	Print()
	{
	
	for (j = 1; j<=10; j++)
	{
		cout<<i<<" X "<<j<<"  =  "<<i*j<<endl;
		}
	}

}

using namespace TableOf5;

int main()
{
TableOf5::Print();

getch();
return 0;
}

