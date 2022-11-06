//vector
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<vector>

int main()
{
vector <int> v(3);
v[0] = 5;
v[1] = 6;
v[2] = 7;

for (int i=0; i<v.size(); i++)
cout<<v[i]<<endl;
cout<<"*****"<<endl;
v.push_back(8);v.pop_back();
vector <int>::iterator itr;
for (itr = v.begin(); itr!=v.end(); itr++)
cout<<*itr<<endl;

getch();
return 0;
}

