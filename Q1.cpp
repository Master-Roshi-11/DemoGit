/*1. Write a program to create student class with data members 
rollno, marks1, mark2, mark3.
Accept data (acceptInfo()) and display using display member function.
Also display total, percentage and grade.*/
#include<iostream>
using namespace std;
class Student
{
	private :
			int rollno;
			int marks1;
			int marks2;
			int marks3;
			int total;
			float per;
			char grade;
			
	public :
			void acceptData();
			void displayData();
			void calculateData();
};
void Student::acceptData()
{
	cout<<"Enter Roll No : ";
	cin>>rollno;
	cout<<"Enter Marks 1 : ";
	cin>>marks1;
	cout<<"Enter Marks 2 : ";
	cin>>marks2;
	cout<<"Enter Marks 3 : ";
	cin>>marks3;
	
}
void Student::displayData()
{
	cout<<"Roll No : "<<rollno<<endl;
	cout<<"Marks 1 : "<<marks1<<endl;
	cout<<"Marks 2 : "<<marks2<<endl;
	cout<<"Marks 3 : "<<marks3<<endl;	
	cout<<"Total : "<<total<<endl;	
	cout<<"Percentage : "<<per<<endl;
	cout<<"Grade : "<<grade<<endl;	
}
void Student::calculateData()
{
	total=marks1+marks2+marks3;
	per=(total/300.0)*100;
	if(per>=60)
		grade='A';
	else if(per>=45 && per<60)
		grade='B';
	else
		grade='C';
}
int main()
{
	Student s1;
	s1.acceptData();
	s1.calculateData();
	s1.displayData();
	return 0;
}
