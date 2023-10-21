#include<stdio.h>
void area(int);
int main()
{
	int r=4;
	area(r);

	return 0;
}
void area(int r) {
	printf("Area = %f ",3.14*r*r);
}

