/*7. Create Date class with members day, month, year. 
Write no argument and parameterized constructor. 
Create two object s and initialize them using no argument and 
parameterized constructor respectively. Print date using display function.*/
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

void Date::display()
{
	cout<<"Date : "<<getDate()<<"/"<<getMonth()<<"/"<<getYear()<<endl;
}
int main()
{
	Date d1,d2(9,9,2023);
	d1.setDate(7);
	d1.setMonth(9);
	d1.setYear(2023);
	d1.display();
	d2.display();
	return 0;
}
