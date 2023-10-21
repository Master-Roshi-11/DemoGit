#include<iostream>

using namespace std;

void show( int, int x=10);

int main(){
	int x=20,y=5;
	show(y);  //jump to function defination
}
void show(int b, int a){   //jump
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"a+b= "<<a+b<<endl;
}
