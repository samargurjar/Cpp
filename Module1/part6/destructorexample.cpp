#include <stdio.h>

class mobile
{
public:
	virtual void f1() {  }
	virtual ~mobile() { printf("\n memory deallocated for mobile ns variables"); }
	

};

class SmartMobile :public mobile
{

public:
	void f1() { }
	~SmartMobile() { printf("\n memory deallocated for smart mobile ns variables"); }


};


int main()
{
	{
		#if 0
			SmartMobile *y = new SmartMobile;
			delete y;
		#endif
			mobile *y = new SmartMobile;
			y->f1();
			delete y;

				
	}
return 0;
}

