//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class Vehicle
{
	int VId;
	char Model[30];
	int Price;
	public:
		Vehicle()
		{
			VId = 0;
			strcpy(Model,"");
			Price = 0;
		}
		
		Vehicle(int VId,char *Model,int Price)
		{
			this->VId = VId;
			strcpy(this->Model,Model);
			this->Price = Price;
		}
		
		void setData(int VId,char *Model,int Price)
		{
			this->VId = VId;
			strcpy(this->Model,Model);
			this->Price = Price;
		}
		
		void inputData()
		{
			cout<<"Enter VId : ";
			cin>>VId;
			cout<<"Enter Model : ";
			cin>>Model;
			cout<<"Enter Price : ";
			cin>>Price;
			cout<<endl;
		}
		
		void dispData()
		{
			cout<<"VId  = "<<VId<<endl;
			cout<<"Model = "<<Model<<endl;
			cout<<"Price = "<<Price<<endl;
			cout<<endl;
		}
		
		int getVId()
		{
			return VId;
		}
		
		char *getModel()
		{
			return Model;
		}
		
		int getPrice()
		{
			return Price;
		}
		
		~Vehicle()
		{
			cout<<"Object Memory Deleted"<<endl;
		}
		
};

int main()
{
int n;
cout<<"Enter No of Vehicles : ";
cin>>n;
Vehicle v[n];
int i;
for (i=0; i<n; i++)
{
	v[i].inputData();
}

ofstream ofs("Vehicle.bin");
ofs.write(reinterpret_cast<char*>(&v) , sizeof(v));
ofs.close();
cout<<"\nData Successfully Written on File"<<endl;

Vehicle V;
int r;
cout<<"Enter VId for modifying : ";
cin>>r;
int flag = 0;
ifstream ifs("Vehicle.bin");
while (ifs.read(reinterpret_cast<char*>(&v) , sizeof(v)))
{
	if ( r == V.getVId() )
	flag = 1;
}
ifs.close();

if (flag == 0)
{
cout<<"\nNo Such VId exists to Modify";
}
if (flag=1)
{
	ofstream ofs2("temp.bin");
	ifstream ifs2("Vehicle.bin");
	while (ifs2.read(reinterpret_cast<char*>(&V) , sizeof(V)))
	{
		if (V.getVId() == r)
		V.inputData();
		
		ofs2.write(reinterpret_cast<char*>(&V) , sizeof(V));
		
		
	}
	ofs2.close();
	ifs2.close();
}

ofstream ofs3("Vehicle.bin");
ifstream ifs3("temp.bin");
while (ifs3.read(reinterpret_cast<char*>(&V) , sizeof(V)))
{
		ofs3.write(reinterpret_cast<char*>(&V) , sizeof(V));
}
	ofs3.close();
	ifs3.close();
getch();
return 0;
}

