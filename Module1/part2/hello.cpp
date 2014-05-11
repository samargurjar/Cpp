#include <stdio.h>

class Process
{
public:
		Process(int n)
		{	
				not =(int*) malloc(sizeof(int)*n);
		}

private:
		int *not;


};


















#if 0
class Circle
{
public 
Circle()  { r=0; }



private:
		int r
}






















class MobileUtility
{
private:
	MobileUtility() {}
public:
	int static getBalance(int mobilePhoneNumber) { return 3; }
	int static getDataBalance(int mobilePhoneNumber) { return 4; }
};

int main()
	{

	
	int b = MobileUtility::getBalance(23);
	return 0;
}



















//constructor concept
class Mobile
{
public:
	 Mobile(int x) { imin =x; }

private:
		int imin;
};

int main()
{
		Mobile x(34);;
		return 0;

}
//end of constructor concept






















int i =0;
void f4()
{
		if( i < 6)
		{
			i++;
			f4();
		}
		printf("%d",i);
}

int main()
{
	f4();
	return 0;
}



















int* f1(int *m)
{
	
	return m;

}

int main()
{
int j =3;
int *k = f1(&j);
*k =4;
printf("%d",j);
return 0;

}







 int* f1()
{
	int k =3;
	return &k;

}

int main()
{
	int *z = f1();
	printf("%d",*z);

}









//pass by address, pass by refernce, pass by value.

struct Mobile
{
	int imeinumber;
	int phonenumber;
};
void passbyValue(Mobile m)
{
		m.imeinumber=4;
		m.phonenumber=5;
	}


void passbyAddress(Mobile *x)
{
		printf("\n %d %d",x->imeinumber,x->phonenumber);
	}
void passByRef(Mobile &n)
{
		n.imeinumber=4;
		n.phonenumber=5;

}

int main()
{
		Mobile m,*n;
		n = &m;
		//passbyValue(m);
		passByRef(m);
		passbyAddress(n);
		return 0;
}



















// reference concept

int main()
{
	int j =3;
	int &k = j;  // here k is an alias for j. prove it change k , j will change.
	k =5;
	printf("%d",j);


}








class Mobile
{
public:
	void setimeinumber(int imeiNumber)
	{
		this->imeiNumber = imeiNumber;
	}
private:
	int imeiNumber; 	};

int main()
{
	Mobile i,j;
	i.setimeinumber(2);
	j.setimeinumber(3);
	return 0;
}

#endif