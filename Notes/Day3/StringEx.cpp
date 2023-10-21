#include<iostream>
using namespace std;
class A{
    string x;
    public:
   void get(){
   	cout<<"\nEnter a string";
   //	cin>>x;
   	getline(cin,x);
   }
    void display(){
        cout<<"x= "<<x;
    }
};
int main(){
	A obj;
	obj.get();
    obj.display();
	return 0;
}

