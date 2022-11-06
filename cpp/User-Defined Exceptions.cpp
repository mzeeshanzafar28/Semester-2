//Buit-in Exceptions
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class MyException : exception
{
char msg[100];
public:
	MyException	(char *msg)
	{
		strcpy(this->msg , msg);
	}
	
	const char *what()
	{
		return msg;
	}
	
	void PrintError()
	{
		cout<<"Error : "<<msg<<endl;
	}

	
};

int main()
{

float i,j;
cout<<"Enter i :";
cin>>i;
cout<<"Enter j : ";
cin>>j;
try{
	
	if (j==0)
	throw MyException("Divide by zero");
	else 
	cout<<"Result = "<<i/j<<endl; 
	}
	catch (MyException me)
	{
	cout<<me.what()<<endl;
	me.PrintError();
		}
getch();
return 0;
}

