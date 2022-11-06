//map
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<map>

int main()
{

map <int,string> m;
m[0] = "abc";
m[1] = "ghi";
m[2] = "def";
m[1] = "pqr";
	map <int,string> :: iterator itr;
	for (itr = m.begin(); itr != m.end(); itr++)
		cout<<itr->first<<endl;
		cout<<itr->second<<endl;

getch();
return 0;
}

