//Standard Template Library ----STL--deque
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<deque>


int main()
{
	deque <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.pop_back();
	v.push_back(4);
	v.pop_front();
	v.push_back(5);
deque <int> :: iterator itr;
for (itr = v.begin(); itr!=v.end(); itr++)
cout<<*itr<<endl;



getch();
return 0;
}

