#include <stdio.h>


class Payment
{
public:
		virtual int makePayment(int cardnumber, int amt)=0;

};

class SBiPayment:public Payment
{

	public:
		virtual int makePayment(int cardnumber, int amt)
		{
				printf("\n assume payment done using sbi");
				return 1;
		}

};

class HDFCPayment:public Payment
{

	public:
		virtual int makePayment(int cardnumber, int amt)
		{
				printf("\n assume payment done using HDFC");
				return 1;
		}

};



Payment* get() //assume it is header
{
	return new HDFCPayment;

}




void doShopping()
{
	printf("assume shopping done");
	Payment *x = get();
	x->makePayment(23,1);
	

}

int main()
{
	doShopping();
	return 0;
}





