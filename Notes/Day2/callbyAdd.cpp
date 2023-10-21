//call by address

#include<iostream>

using namespace std;

void show(int *);

int main(){

	int x=9;
	cout<<"x= "<<x<<endl;
	show(&x);  //0X345
	
	cout<<"x= "<<x;
	
}
void show(int * ptr){  //ptr=0X345
		*ptr=99;
}
