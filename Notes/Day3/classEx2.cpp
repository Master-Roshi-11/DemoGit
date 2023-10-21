#include<iostream>
#pragma pack(1)
using namespace std;

class  Circle{
	int r;
	float area, circum;
	public:
	void acceptDetails(){
		cout<<"\nEnter the radius for circle : \t";
		cin>>r;		
	}
	void displayDetails();
	private:
	void calArea(){
		area=3.14*r*r;
	}
	void circumference(){
		circum=2*3.14*r;
	}
}; //end of class circle

void Circle::displayDetails(){
//	calArea();
//	circumference();
	cout<<"\nradius = "<<r;	
	cout<<"\nArea = "<<area;
	cout<<"\nCircumference = "<<circum;	
}

int main(){

	Circle c;
	c.acceptDetails();
	c.calArea();
	c.displayDetails();
	
	return 0;
}
