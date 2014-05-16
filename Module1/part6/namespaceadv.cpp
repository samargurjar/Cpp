#include <stdio.h>

//assume this is in our header file
namespace hello
{

void f1() {}
class Device
{

};

}

//assume this comesin a third party header file
class Device
{

};



int main()
{
	Device obj1;
	hello::Device obj2;

	using namespace hello;

	f1();

	





	return 0;
}