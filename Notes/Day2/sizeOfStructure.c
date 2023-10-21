#include<stdio.h>
#pragma pack(1)
struct Student{
	int roll;
	char name[10];
};



int main(){
	printf("size = %d  ",sizeof(struct Student) );
	return 0;
}
