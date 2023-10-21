/*
3. Create a class Date with data members as dd, mm, yy. 
Write getters and setters for all the data members. 
Also add the display function. Create Default and Parameterized constructors. 
Create the object of this class in main method and invoke all the methods in 
that class. */
#include<iostream>
using namespace std;
class Date
{
	private : 	int dd;
				int mm;
				int yy;	
	public : 
			Date();
			Date(int,int,int);
			void setDD(int d)
			{
				dd=d;
			}
			void setMM(int m)
			{
				mm=m;
			}
			void setYY(int y)
			{
				yy=y;
			}
			int getDD()
			{
				return dd;
			}
			int getMM()
			{
				return mm;
			}
			int getYY()
			{
				return yy;
			}
			void display();
};
Date::Date()
{
	setDD(0);
	setMM(0);
	setYY(0);
}
Date::Date(int d,int m,int y)
{
	setDD(d);
	setMM(m);
	setYY(y);
}
void Date::display()
{
	cout<<getDD()<<"/"<<getMM()<<"/"<<getYY()<<endl;
}

int main()
{
	Date d1,d2(8,9,2023);
	d1.setDD(7);
	d1.setMM(9);
	d1.setYY(2023);
	d1.display();
	d2.display();
	
	return 0;
}
