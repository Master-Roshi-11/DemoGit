#include<iostream>
using namespace std;
class Date{
    int day,mon,yr;
    public:
    	void getDetails(){
    		cout<<"\nEnter Day, Month & year :\t";
    		cin>>day>>mon>>yr;
		}
    void display();
};
void Date::display(){
    cout<<day<<"-"<<mon<<"-"<<yr;
}
class Student{
	int roll;
	char name[10];
	Date dob;  //part-of relation / has-a relation /containment
	public:
		void acceptDetails()
		{
			cout<<"\nEnter Roll no., Name :\t";
			cin>>roll>>name;
			dob.getDetails();
		}
		void display();
};
void Student::display(){
	cout<<"\nRoll No - "<<roll;
	cout<<"\nName - "<<name;
	cout<<"\nDate of Birth - ";
	dob.display();
}
int main(){
	Student obj;    //constructor get called
	obj.acceptDetails();	
    obj.display();
	return 0;
}


