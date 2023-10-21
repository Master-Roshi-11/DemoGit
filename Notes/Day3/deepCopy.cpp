
#include<iostream>
using namespace std;
class  B
{
    int *n;
  	public:
  	B(int *x){
  		n=x;
	  }
  	void display(){
  	cout<<"\nValue of n="<<n;
  	cout<<"\nValue at address in n="<<*n;
  }
  
  B(const B& obj){
  	
  	n=new int(*obj.n);  //600 --> 7
  	
  	//n=obj.n;   //this assignment will be done by shallow copy
  	
  	
  }
  
  
};
int main()
{
	int x=7;
	cout<<"\naddress of x="<<&x;
    B a1(&x);   
    a1.display();
    cout<<"\n------------------------------------------";
    B a2(a1); // calls the copy ctor
    
    a2.display();
   return 0;
}


