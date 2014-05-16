#include <stdio.h>

class mobile
{
public:
	mobile() { printf("1"); }
	mobile(int x) {
		imeinumber = x;  printf("2"); } //this will not get
	//called implicity during derived class object creation.
private:
		int imeinumber;

};

class SmartMobile :public mobile
{

public:
	SmartMobile() { printf("3"); }
	SmartMobile(int imn, int ostype ) 	: mobile(imn)

	{ printf("4"); 	}

private:
		int os;

};


int main()
{
#if 0 
	SmartMobile obj1; 
#endif
SmartMobile obj2(2,3);

return 0;
}

