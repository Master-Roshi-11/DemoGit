/* 4. Create a class Book with data members as bname, id, author, price. 
Write getters and setters for all the data members. 
Also add the display function. Create Default and Parameterized constructors.
Create the object of this class in main method and invoke all 
the methods in that class.*/
#include<iostream>
using namespace std;
class Book
{
	private : string bname;
				int id;
				string author;
				float price;
	public :
			Book();
			Book(string,int,string,float);
			
			void setBname(string);
			void setId(int);
			void setAuthor(string);
			void setPrice(float);
			
			string getBname();
			int getId();
			string getAuthor();
			float getPrice();
			
			void display();
};
Book::Book()
{
	setBname(" ");
	setAuthor(" ");
	setId(0);
	setPrice(0.0);
}
Book::Book(string b,int i,string a,float p)
{
	setBname(b);
	setId(i);
	setAuthor(a);
	setPrice(p);
}
void Book::setBname(string bn)
{
	bname=bn;
}
void Book::setId(int i)
{
	id=i;
}
void Book::setAuthor(string a)
{
	author=a;
}
void Book::setPrice(float p)
{
	price=p;
}
string Book::getBname()
{
	return bname;
}
int Book::getId()
{
	return id;
}
string Book::getAuthor()
{
	return author;
}
float Book::getPrice()
{
	return price;
}
void Book::display()
{
	cout<<"Book Details"<<endl;
	cout<<"Name : "<<getBname()<<endl;
	cout<<"ID : "<<getId()<<endl;
	cout<<"Author : "<<getAuthor()<<endl;
	cout<<"Price : "<<getPrice()<<endl;
	
}

int main()
{
	Book b1,b2("Rashmirath",202,"R.Dinkar",250);
	b1.setBname("5 AM");
	b1.setId(201);
	b1.setAuthor("R.Sharma");
	b1.setPrice(450);
	b1.display();
	b2.display();
	return 0;
}
