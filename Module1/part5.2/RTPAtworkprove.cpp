#include <stdio.h>

class A
{
public:
	virtual void f1() { printf("1"); }

};

class B:public A
{
private:
	virtual void f1() { printf("2"); }

};

int main()
{

	A *obj =new B;
	obj->f1();

}