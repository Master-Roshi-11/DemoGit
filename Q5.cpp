/*5. Create a class Point with data members as x,y. Create Default and 
Parameterized constructors. Write getters and setters for all the data members. 
Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */
#include<iostream>
using namespace std;
class Point
{
	private :
			int x;
			int y;
	public :	
			Point();
			Point(int,int);
			
			void setX(int);
			void setY(int);
			
			int getX();
			int getY();
			
			void display();
};

Point::Point()
{
	setX(0);
	setY(0);
}
Point::Point(int x,int y)
{
	setX(x);
	setY(y);
}

void Point::setX(int x)
{
	this->x=x;
}
void Point::setY(int y)
{
	this->y=y;
}

int Point::getX()
{
	return this->x;
}
int Point::getY()
{
	return this->y;
}

void Point::display()
{
	cout<<"Value of X : "<<getX()<<endl;
	cout<<"Value of Y : "<<getY()<<endl;
}

int main()
{
	Point p1,p2(10,20);
	p1.setX(3);
	p1.setY(6);
	p1.display();
	p2.display();
	return 0;
}
