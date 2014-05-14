#include <stdio.h>

class Mobile
{

public:
	void seti(int k) { imeinumber =k; }
	int geti() { return imeinumber; }
	void setusbsupport(int m) { usbSupport = m; }
	virtual void acceptDetails() { printf("accept imeinumber"); }

	
private:
		int imeinumber;
		int usbSupport;
};


class SmartMobile:public Mobile
{

public:
	void acceptDetails() { printf("accept imei number + os details"); }
	void setos(int k) { typeofOs=k; }
	int getos() { return typeofOs; }

private:
		int typeofOs;

	
};

class DumbMobile:public Mobile
{

public:
	void setnos(int k) { nos = k; }
	int getnos() { return nos; }
	void acceptDetails() { printf("accept imei number + nos details"); }

private:
		int nos;

};











Mobile* getSomeMobile()
{
		int choice =0;
		printf("\n 1. Mobile \n 2. Smart Mobile \n 3. Dumb Mobile");
		scanf("%d",&choice);
		Mobile *x =NULL;
		if( choice == 1)
				x =new Mobile;
		else if(choice == 2)
				x =new SmartMobile;
		else if(choice == 3)
				x =new DumbMobile;

		return x;
		


}








int main()
{

#if 0
	Mobile *x=getSomeMobile();
	x->acceptDetails();
#endif
	Mobile *x =new SmartMobile;
	SmartMobile *y =new SmartMobile;




		


	











	






#if 0
	SmartMobile obj1;
	obj1.seti(2);
	obj1.setos(4);
	obj1.setusbsupport(3);
	DumbMobile obj2;
	obj2.seti(5);
	obj2.setnos(4);
#endif


	return 0;
}









