#include<iostream>
using namespace std;
class Base{
	protected:
    int x;
    void display(){
        cout<<"\nx="<<x;
    }
};
class Child:public Base
{
	float f;
	public:
		void displayChild(){
			f=2.3;
			x=4;
			display();
			cout<<"\nf="<<f;	
		}
};

int main(){

    Child c;
    c.x=10;
    c.display();
    
	return 0;
}

