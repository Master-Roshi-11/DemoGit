#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(){
    	cout<<"\nThis is Default Constructor";
        x=20;
    }
    //parameterized constructor
    A(int x){
    	this->x=x;	 //ambiguity error
	}
    
    void display(){
    	
    	//in side function to refere an object for which this function is called we use this pointer
        cout<<"\nx="<<x;
    }
};
int main(){
	A obj;  //constructor will be called  - default/ parameter less/no-arg constructor
    obj.display();
    
    A obj2(4);  //call parameterized constructor
    obj2.display();
    
	return 0;
}

