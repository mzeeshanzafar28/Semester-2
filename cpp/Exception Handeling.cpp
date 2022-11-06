//Exception Handeling
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>

int main()
{
	int i,j;
	cout<<"Enter i : ";
	cin>>i;
	cout<<"Enter j : ";
	cin>>j;
	try {
		
		if (j==0)
		throw string("Zero not allowed");
		else
		cout<<"Result = "<<i/j<<endl;
	}
	
	catch (string s)
	{
		cout<<s<<endl;
	}
	


getch();
return 0;
}

