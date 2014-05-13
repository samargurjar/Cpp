#include <stdio.h>

class A
{
public: 
		A() { i =new int; printf("1"); *i =4; }
		~A() { delete i ; printf("2"); }
		int geti() { return *i; }

	private:
			int *i;
};

int main()
{
	A obj1;
	A obj2=obj1;
	printf("%d",obj2.geti());
	return 0;
}