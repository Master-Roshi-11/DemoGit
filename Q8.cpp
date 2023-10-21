/*8. Create Employee class with members id(int),name(string),dob(Date).
Use above created Date class. 
Write default and parameterized constructor in Employee Class.
Write accept () function to accept information and display () to 
display emp information.*/
#include<iostream>
using namespace std;
class Date
{
	private : 
				int date;
				int month;
				int year;
	public :	
				Date();
				Date(int,int,int);
				
				void setDate(int);
				void setMonth(int);
				void setYear(int);
				
				int getDate();
				int getMonth();
				int getYear();
				
				void inputDetails();
				
				void display();
};

Date::Date()
{
	setDate(0);
	setMonth(0);
	setYear(0);
}
Date::Date(int x,int y,int z)
{
	setDate(x);
	setMonth(y);
	setYear(z);
}

void Date::setDate(int date)
{
	this->date=date;
}
void Date::setMonth(int month)
{
	this->month=month;
}
void Date::setYear(int year)
{
	this->year=year;
}

int Date::getDate()
{
	return this->date;
}
int Date::getMonth()
{
	return this->month;
}
int Date::getYear()
{
	return this->year;
}

void Date::inputDetails()
{
	int d,m,y;
	cout<<"Enter Date : ";cin>>d;
	setDate(d);
	cout<<"Enter Month : ";cin>>m;
	setMonth(m);
	cout<<"Enter Year : ";cin>>y;
	setYear(y);
}

void Date::display()
{
	cout<<getDate()<<"/"<<getMonth()<<"/"<<getYear()<<endl;
}
class Employee
{
	private :
				int id;
				string name;
				Date dob;
	public :
				Employee();
				//Employee(int,string,Date);
				void accept();
				void displayE();
};
Employee::Employee()
{
	id=0;
	name=" ";
	Date(0,0,0);
}
/*Employee::Employee(int i,string n,Date d)
{
	this->id=i;
	this->name=n;
	
	
}*/
void Employee::accept()
{
	cout<<"Enter ID : ";cin>>id;
	cout<<"Enter Name : ";cin>>name;
	dob.inputDetails();
}
void Employee::displayE()
{
	cout<<"Employee Details"<<endl;
	cout<<"ID : "<<this->id<<endl;
	cout<<"Name : "<<this->name<<endl;
	cout<<"Date : ";this->dob.display();
}
int main()
{
	Employee e;
	e.accept();
	e.displayE();
}

