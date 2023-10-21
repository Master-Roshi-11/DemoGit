/*2. Create a class Person with data members as name, age, city. 
Write getters and setters for all the data members. 
Also add the display function. Create Default and Parameterized constructors. 
Create the object of this class in main method and 
invoke all the methods in that class.*/
#include<iostream>
using namespace std;
class Person
{
	private :
		string name;
		int age;
		string city;
	public :
		Person();
		Person(string,int,string);
		void setName(string n)
		{
			name=n;
		}
		void setAge(int a)
		{
			age=a;
		}
		void setCity(string c)
		{
			city=c;
		}
		string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
		string getCity()
		{
			return city;
		}
		void display();
	
};
Person::Person()
{
	setName(" ");
	setAge(0);
	setCity(" ");
}
Person::Person(string n,int a,string c)
{
	setName(n);
	setAge(a);
	setCity(c);
}

void Person::display()
{
	cout<<"Name : "<<getName()<<endl;
	cout<<"Age : "<<getAge()<<endl;
	cout<<"City : "<<getCity()<<endl;
}

int main()
{
	Person p1,p2("Udit",25,"Amravati");
	p1.setName("Om");
	p1.setAge(20);
	p1.setCity("Amravati");
	cout<<"Object P1 Values"<<endl;
	p1.display();
	cout<<"Object P2 Values"<<endl;
	p2.display();
}
