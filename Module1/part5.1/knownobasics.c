#include <stdio.h>

class A
{
public:
	A() { x =new int; }
	void setx(int i) { *x = i; }
	int getx() { return *x; 
	}
	~A() { delete x; }

private:
		int *x;
};



int main()
{

	A obj1 ;
	obj1.setx(3);
	A obj2 = obj1;//welcome to C++


}



























#if 0

A f1()
{
	A obj1;
	return obj1;
}

int main()
{
		int x =f1();
		printf("%d",x);

}

#endif