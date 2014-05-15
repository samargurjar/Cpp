#include <stdio.h>

class A
{
public:
	A() { printf("1"); }
	A(int i) { printf("3"); }


};

class B:public A
{
public:
	B() {  printf("2");}
	B(int m):A(m) { printf("4"); }
};


int main()
{
	B obj2(6);;
	return 0;

}