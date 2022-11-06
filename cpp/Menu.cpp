#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>

class Student
{
    private:
        int rollno;
        char name[30];
        int marks;
    public:
        Student()
        { 
            rollno = 0;
            strcpy(name,"");
            marks = 0;
        }

        Student(int rollno, char *name, int marks)
        {
            this->rollno = rollno;
            strcpy(this->name,name);
            this->marks = marks;
        }
        void AddData()
        {
        	system("color 1");
            cout<<"Enter Rollno : ";
            cin>>rollno;
            cout<<"Enter Name : ";
            cin.ignore();
            cin.getline(name,30);
            cout<<"Enter Marks : ";
            cin>>marks;
        }

        void SetData(int rollno, char *name, int marks)
        {
            this->rollno = rollno;
            strcpy(this->name,name);
            this->marks = marks;
        }

        void DispData()
        {
        	system("color 3");
            cout.setf(ios::left);
            cout<<setw(20)<<rollno;
            cout<<setw(20)<<name;
            cout<<setw(20)<<marks;
            cout<<endl;
        }

        int GetRollno()
        {
        	system("color 4");
            return rollno;
        }

        char *GetName()
        {
        	system("color 5");
            return name;
        }

        int GetMarks()
        {
        	system("color 6");
            return marks;
        }

        ~Student()
        {
            
        }

};


void addData()
{
    Student s;
    int r,flag = 0;
    cout<<"Enter Rollno : ";
    cin>>r;
    ifstream ifs ("student.bin");
    while (ifs.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    if (r == s.GetRollno())
    {
      flag++;
    } 
    ifs.close();
    if (flag == 0)
        {
            char N[30];
            int M;
            cout<<"Enter Name : ";
            cin.ignore();
            cin.getline(N,30);
            cout<<"Enter Marks : ";
            cin>>M;
    ofstream ofs ("student.bin",ios_base::app);
    s.SetData(r,N,M);
    ofs.write(reinterpret_cast<char*>(&s) , sizeof(s));
    ofs.close();
    cout<<"\nData Successfully Written"<<endl;
                }
    else{  cout<<"\nRollno already exists"<<endl;}
}

void dispData()
{
    Student s;
    ifstream ifs ("student.bin");
    
            cout.setf(ios::left);
            cout<<setw(20)<<"Rollno";
            cout<<setw(20)<<"Name";
            cout<<setw(20)<<"Marks";
            cout<<endl<<endl;
    
    while (ifs.read(reinterpret_cast<char*>(&s), sizeof(s)))
    {
        s.DispData();
    }
    ifs.close();

}


void modData()
{
    Student s;
    int r,flag = 0;
    cout<<"Enter Rollno whose data you want to modify : ";
    cin>>r;

    ifstream IFS("student.bin");
    while (IFS.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        if (r == s.GetRollno())
        flag++;
    }
    IFS.close();


    if (flag == 1)
    {

    ifstream ifs ("student.bin");
    ofstream ofs ("temp.bin");
    while(ifs.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        if (r == s.GetRollno())
        {
            cout<<"\n***Enter New Data for Student***\n"<<endl;
            s.AddData();
        }
        ofs.write(reinterpret_cast<char*>(&s), sizeof(s));
    }
    ifs.close();
    ofs.close();

    ifstream ifs2("temp.bin");
    ofstream ofs2("student.bin");
    while (ifs2.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        ofs2.write(reinterpret_cast<char*>(&s) , sizeof(s));
    }
    cout<<"\nData Successfully Modified"<<endl;
    ifs2.close();
    ofs2.close();
                            }
else
cout<<"\nRollno Does not Exist\n"<<endl;
}


void delData()
{
    Student s;
    int r,flag = 0;
    cout<<"Enter Rollno whose data you want to delete : ";
    cin>>r;

    ifstream IFS("student.bin");
    while (IFS.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        if (r == s.GetRollno())
        flag++;
    }
    IFS.close();

    if (flag == 1)
    {
    
    ifstream ifs ("student.bin");
    ofstream ofs ("temp.bin");
    while(ifs.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        if (r != s.GetRollno())
        ofs.write(reinterpret_cast<char*>(&s), sizeof(s));
    }
    ifs.close();
    ofs.close();

     ifstream ifs2("temp.bin");
    ofstream ofs2("student.bin");
    while (ifs2.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        ofs2.write(reinterpret_cast<char*>(&s) , sizeof(s));
    }
    cout<<"\nData Successfully Deleted"<<endl;
    ifs2.close();
    ofs2.close();
            }
else 
cout<<"\nRollno does not Exist\n"<<endl;

}
void searchByName()
{
    int flag = 0;
    char ch[30];
    cout<<"Enter Name to search Data : ";
    cin.getline(ch,30);

    Student s;
    ifstream ifs ("student.bin");

           

    while (ifs.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        if ( strcmpi(s.GetName() , ch ) == 0 )
        {
            cout.setf(ios::left);
            cout<<setw(20)<<"Rollno";
            cout<<setw(20)<<"Name";
            cout<<setw(20)<<"Marks";
            cout<<endl<<endl;
        s.DispData();
        flag++;
            }
    }
    ifs.close();

        if (flag == 0)
        cout<<"\nName Does not Exist in Record\n"<<endl;
}

void searchByRollno()
{
    int flag = 0;
    int r;
    cout<<"Enter Rollno to search Data : ";
    cin>>r;

    Student s;
    ifstream ifs ("student.bin");
    while (ifs.read(reinterpret_cast<char*>(&s) , sizeof(s)))
    {
        if (r == s.GetRollno())
        {
            cout.setf(ios::left);
            cout<<setw(20)<<"Rollno";
            cout<<setw(20)<<"Name";
            cout<<setw(20)<<"Marks";
            cout<<endl<<endl;
            s.DispData();
            flag++;
            }
    }
    ifs.close();

    
        if (flag == 0)
        cout<<"\nRollno Does not Exist in Record\n"<<endl;


}
void dispHighest()
{
    ifstream ifs ("student.bin");
	Student s;
	int count = 0;
	while (ifs.read (reinterpret_cast<char*> (&s), sizeof(s)))
	{
		count++;
	}
	ifs.close();
	Student s2[count];
	ifstream ifs2 ("student.bin");
	int i = 0;
	while (ifs2.read (reinterpret_cast<char*> (&s), sizeof(s)))
	{
		s2[i] = s;
		i++;
	}
	ifs2.close();
	int large = s2[0].GetMarks();
	int loc = 0;
	for (i=1; i<count; i++)
	{
		if (s2[i].GetMarks() > large)	
		{
			large = s2[i].GetMarks();
			loc = i;
		}
	}	
	         cout.setf(ios::left);
            cout<<setw(20)<<"Rollno";
            cout<<setw(20)<<"Name";
            cout<<setw(20)<<"Marks";
            cout<<endl<<endl;
            
             s2[loc].DispData();



}



int main()
{

    system("color a");

    char ch;
    while (1)
    {
        cout<<"------------------------------"<<endl;
        cout<<"STUDENT DATA MANAGEMENT SYSTEM"<<endl;
        cout<<"-------------------------------"<<endl;
        cout <<"1. Add Student data" << endl;
		cout <<"2. Display all Students data" << endl;
		cout <<"3. Modify Student data" << endl;
		cout <<"4. Delete Student data" << endl;
		cout <<"5. Search By Name" << endl;
		cout <<"6. Search By Roll No" << endl;
		cout <<"7. Display student with highest marks" <<endl;
		cout <<"8. Exit" << endl<<endl;
        cout<<"Enter Your Choice : ";
        ch = getche();
        cout<<endl<<endl;

        if (ch=='1')
        addData();
        else if (ch=='2')
        dispData();
        else if (ch=='3')
        modData();
        else if (ch=='4')
        delData();
        else if (ch=='5')
        searchByName();
        else if (ch=='6')
        searchByRollno();
        else if (ch=='7')
        dispHighest();
        else if (ch=='8')
        {
        cout<<"\n***GoodBye***"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"Created By : M Zeeshan Zafar"<<endl;
        cout<<"----------------------------"<<endl;
        break;
		}
        else
        cout<<"Invalid Choice, Try Again"<<endl;

        cout<<endl;
        system("pause");
        system("cls");

    }
    getch();
    return 0;
}
