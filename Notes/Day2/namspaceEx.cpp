#include<iostream>

using namespace std;
	
	namespace A{
		void display(){
			cout<<"This is A's' display";
		}
	
	};
	namespace B{
		void display(){
			cout<<"This is B's 'display";
		}
	}
int main(){
		A::display();

		B::display();

	return 0;
}
