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
			strcpy(name,"");
			marks = 0;
		}
		
		student(int rollno, char *name, int marks)
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
		
		void SetData(int rollno, char *name, int marks)
		{
			this->rollno = rollno;
			strcpy(this->name,name);
			this->marks = marks;
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
			cout<<"Student class destructor called"<<endl;
		}
		
		student operator ++(void);
		student operator ++(int);
		student operator --(void);
		student operator --(int);
		
		student operator *(int a);
		
		friend ostream &operator <<(ostream &os,const student &s);
		friend istream &operator >>(istream &is,student &s);
		
};

ostream &operator <<(ostream &os , const student &s)
{
	os << "Rollno = "<<s.rollno<<endl;
	os << "Name = "<<s.name<<endl;
	os << "Marks = "<<s.marks<<endl;
	return os;
}

istream &operator >>(istream &is , student &s)
{
	is >> s.rollno;
	is >> s.name;
	is >> s.marks;
	return is;
}



Student Student:: operator ++(void)
{
	++marks;
	return *this;
}

Student Student:: operator ++(int)
{
	marks++;
	return *this;
}

Student Student:: operator --(void)
{
	--marks;
	return *this;
}

Student Student:: operator --(int)
{
	marks--;
	return *this;
}


Student Student:: operator *(int a)
{
	this->marks = this->marks*a;
	return *this;
}






int main()
{

student s;
s.SetData(1,"zeeshan",1029);
s.DispData();
s++;
s.DispData();
student s2;
s2 = s*2;
s2.DispData();

s.InputData();
s.DispData();

getch();
return 0;
}

