#include <stdio.h>

class A
{
public:
	virtual ~A() { printf("1"); }


};
class B:public A
{
	

public:
	~B() { printf("2"); }


};

int main()
{
	{
		A *obj =new B;
		delete obj;
	}
	return 0;

}