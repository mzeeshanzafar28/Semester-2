//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<queue>

int main()
{
queue <int> v;
v.push(1);
v.push(2);
v.push(3);
v.pop();

while (!v.empty())
{
	cout<<v.front()<<endl;
	v.pop();
}

getch();
return 0;
}

