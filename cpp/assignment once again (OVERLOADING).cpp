//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class student
{
	int rollno;
	char name[30];
	int marks;
	public:
		student()
		{
			rollno = 0;
			strcpy(this->name,"");
			this->marks = marks;
		}
		
		student(int rollno, char *name, int marks)
		{
			this->rollno = rollno;
			strcpy(this->name, name);
			this->marks = marks;
		}
		
		void SetData(int rollno, char *name, int marks)
		{
			this->rollno = rollno;
			strcpy(this->name,name);
			this->marks = marks;		
		}
		
		void InputData()
		{
			cout<<"Enter Rollno : ";
			cin>>rollno;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Marks : ";
			cin>>marks;
			cout<<endl;
		}
		
		void DispData()
		{
			cout<<"Rollno = "<<rollno<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Marks = "<<marks<<endl;
			cout<<endl;
		}
		
		int GetRollno()
		{
			return rollno;
		}
		
		char *GetName()
		{
			return name;
		}
		
		int GetMarks()
		{
			return marks;
		}
		
		~student()
		{
			cout<<"Destructor called"<<endl;
		}
		
		student operator ++(void);
		student operator ++(int);
		student operator --(void);
		student operator --(int);
		
		student operator *(int x);
		
		friend ostream &operator <<(ostream &os, const student &s);
		friend istream &operator <<(istream &is, student &s);
		
		
		
};

student student::operator ++(void)
{
	++marks;
	return *this;
 } 
 
 student student::operator ++(int)
{
	marks++;
	return *this;
 } 
 
 student student::operator --(void)
{
	--marks;
	return *this;
 } 
 
 student student::operator --(int)
{
	marks--;
	return *this;
 } 
 
 student student::operator *(int x)
{
	this->marks = this->marks * x;
	return *this;
 } 
 
 ostream &operator <<(ostream &os, const student &s)
 {
 	os << "Rollno = "<<s.rollno<<endl;
 	os << "Name = "<<s.name<<endl;
 	os << "Marks = "<<s.marks<<endl;
 	return os;
 }

 istream &operator <<(istream &is, student &s)
 {
 	cout << "Enter Rollno = ";
	 is >>s.rollno;
 	cout << "Enter Name = ";
 	is >>s.name;
 	cout <<"Enter Marks : ";
 	is>>s.marks;
 	return is;
 }


int main()
{
student sx;
sx.InputData();
sx.DispData();
sx++;
sx.DispData();
--sx;
sx.DispData();
sx*3;
sx.DispData();

getch();
return 0;
}

