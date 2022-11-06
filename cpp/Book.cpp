//
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
#include<iomanip>
class Book
{
	int BId;
	char Title[30];
	int Price;
	public:
		Book()
		{
			BId = 0;
			strcpy(Title,"");
			Price = 0;
		}
		
		Book(int BId, char *Title, int Price)
		{
			this->BId = BId;
			strcpy(this->Title , Title);
			this->Price = Price;
		}
		
		void setData(int BId,char *Title, int Price)
		{
			this->BId = BId;
			strcpy(this->Title,Title);
			this->Price = Price;
		}
		
		void inputData()
		{
			cout<<"Enter Book ID : ";
			cin>>BId;
			cout<<"Enter Title : ";
			cin.ignore();
			cin.getline(Title,30);
			cout<<"Enter Price : ";
			cin>>Price;
		}
		
		void dispData()
		{
			cout<<"\nBook ID = "<<BId<<endl;
			cout<<"Title = "<<Title<<endl;
			cout<<"Price  = "<<Price<<endl;
		}
		
		int getBId()
		{
			return BId;
		}
		
		char *getTitle()
		{
			return Title;
		}
		
		int getPrice()
		{
			return Price;
		}
		
		~Book()
		{
			cout<<"Object Deleted"<<endl;
		}
		
		
};

int main()
{
int i,N;
cout<<"Enter how many book's data you want to store : ";
cin>>N;
Book b[N];
for (i=0; i<N; i++)
{
	b[i].inputData();

}
ofstream ofs("Books.bin",ios_base::app);
ofs.write(reinterpret_cast<char*>(&b), sizeof(b));
ofs.close();
cout<<"Data Successfully Written on File"<<endl;

Book B;
ifstream ifs("Books.bin");
int count = 0;
while (ifs.read(reinterpret_cast<char*>(&B) , sizeof(B)))
{
	count++;
}
ifs.close();

int j = 0;
Book B2[count];
ifstream ifs2("Books.bin");
while (ifs2.read(reinterpret_cast<char*>(&B) , sizeof(B)))
{
	B2[j] = B;
	j++;
}
ifs2.close();

int low = B2[0].getPrice();
int loc = 0;
for (int k = 1; k<count; k++)
{
	if (strcmpi(B2[k].getTitle(),"computer" == 0))
	if ( B2[k].getPrice() < low )

	{
		low = B2[k].getPrice();
		loc = k;
	}
	
}
B2[loc].dispData();


getch();
return 0;
}

