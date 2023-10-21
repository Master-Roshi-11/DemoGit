#include<iostream>
using namespace std;
class  A
{
    int n;
    A(int n1 = 1) {
	n=n1;
    }
    A(const A& a)  { 
		n=a.n;
    } // user-defined copy ctor
};
int main()
{
	A o;  //default  parameterized const. with default   n=1;
    A a1(7);   //n=7
    A a2(a1); // calls the copy ctor
    return 0;
}


