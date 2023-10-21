/*10. Solve this.
Fresh business scenario to apply inheritance , polymorphism to emp 
based organization scenario.
Create Emp based organization structure --- Emp , Mgr , Worker*/
#include<iostream>
using namespace std;
class Employee
{
	private : 	int id;
				string name;
				int deptId;
				double basicSal;
				
	public:
			Employee(int i,string name,double sal)
			{
				this->id=i;
				this->name=name;
				this->sal=sal;				
			}
			void display()
			{
				cout<<"Employee Details "<<endl;
				cout<<"ID : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Salary : "<<sal<<endl;
			}
				
};
