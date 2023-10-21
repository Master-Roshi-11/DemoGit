/*6. Create a class ComplexNumber with data members real, imaginary. 
Create Default and Parameterized constructors. 
Write getters and setters for all the data members. 
Also add the display function. Create the object of this class in main 
method and invoke all the methods in that class.*/
#include<iostream>
using namespace std;
class Complex
{
	private :
		int real;
		int img;
	public :
		Complex();
		Complex(int,int);
		
		void setReal(int);
		void setImg(int);
		
		int getReal();
		int getImg();
		
		void display();
		
	
};
Complex::Complex()
{
	setReal(0);
	setImg(0);
}
Complex::Complex(int x,int y)
{
	setReal(x);
	setImg(y);
}

void Complex::setReal(int x)
{
	real=x;
}
void Complex::setImg(int y)
{
	img=y;
}

int Complex::getReal()
{
	return real;
}
int Complex::getImg()
{
	return img;
}

void Complex::display()
{
	cout<<"Complex Number : "<<getReal()<<" + "<<getImg()<<"i"<<endl;
}

int main()
{
	Complex c1,c2(10,7);
	c1.setReal(6);
	c1.setImg(11);
	c1.display();
	c2.display();
	return 0;
}
