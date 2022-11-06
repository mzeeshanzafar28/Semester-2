//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>


int main()
{
	
try{

float *f = new float [99999000000];
f[0] = 5;
cout<<"f[0] = "<<f[0]<<endl;
delete [] f;

}

catch(bad_alloc ba)
{
	cout<<"Some error occured, \nDetails : "<<ba.what()<<endl;
	
}


getch();
return 0;
}

