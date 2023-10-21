/*9. Consider that payroll software needs to be developed for computerization 
of operations of an ABC organization. The organization has employees. */
#include<iostream>
using namespace std;

class Employee
{
	private :
				int id;
				string name;
				double bSal;
				double HRA;
				double med;
				double PF;
				double PT;
				double netSal;
				double gSal;
				
	public :
				Employee();
				Employee(int,string,double);
				
				void acceptData();
				void calGrossSal();
				void calNetSal();
				void display();
	
};
Employee::Employee()
{
	this->id=0;
	this->name=" ";
	this->bSal=0.0;
	this->HRA=0.0;
	this->med=0.0;
	this->PF=0.0;
	this->PT=0.0;
	this->netSal=0.0;
	this->gSal=0.0;
	
}
Employee::Employee(int i,string name,double sal)
{
	//cout<<"Tesr";
	this->id=i;
	//cout<<i;
	this->name=name;
	this->bSal=sal;
	this->med=1000;
	this->HRA=(this->bSal)*0.5;
	this->PF=(this->bSal)*0.12;
	this->PT=200;
}

void Employee::acceptData()
{
	int i;
	string n;
	double s;
	
	cout<<"Enter ID : ";cin>>i;
	cout<<"Enter Name : ";cin>>n;
	cout<<"Enter Basic Salary : ";cin>>s;
	//this->Employee::Employee(i,n,s);
	
}
void Employee::calGrossSal()
{
	this->gSal=this->bSal+this->HRA+this->med;
}
void Employee::calNetSal()
{
	this->netSal=this->gSal-(this->PT-this->PF);
}
void Employee::display()
{
	cout<<"Employee Details "<<endl;
	cout<<"ID : "<<this->id<<endl;
	cout<<"Name : "<<this->name<<endl;
	cout<<"Basic Salary : "<<this->bSal<<endl;
	cout<<"Gross Salary : "<<this->gSal<<endl;
	cout<<"Net Salary : "<<this->netSal<<endl;
}
int main()
{
	Employee e1(12,"udit",12000);
	e1.calGrossSal();
	e1.calNetSal();
	e1.display();
	/*Employee e2;
	
	e2.acceptData();
	e2.calGrossSal();
	e2.calNetSal();
	e2.display();*/
	return 0;
}
