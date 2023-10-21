#include<iostream>
#pragma pack(1)
using namespace std;
class Student{
	int roll;
	char name[10];
};



int main(){
	cout<<"size = "<<sizeof(Student);
	return 0;
}
