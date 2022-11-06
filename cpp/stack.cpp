//stack--------(there is no iterstor for stack)
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<stack>

int main()
{
stack <int> v;
v.push(1);
v.push(2);
v.push(3);
v.pop();
while (!v.empty())
{
	cout<<v.top()<<endl;
	v.pop();
}
getch();
return 0;
}

