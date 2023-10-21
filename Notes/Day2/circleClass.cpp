#include<iostream>
#pragma pack(1)
using namespace std;
class  Circle{
	float area, circum;
	public:
	void acceptDetails();
	void displayDetails();
	void calArea();
	void circumference();
}; //end of class circle

//the properties/ functons which are private in class cannot be accessed using object as well


int main(){
	cout<<"size = "<<sizeof(Circle);
	
	Circle c1;  //12 bytes allocatted
	c1.acceptDetails();
	
	c1.r=9;  //error COZ r is private can't be accessible out side the class
	
	return 0;
}
