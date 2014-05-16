#include <stdio.h>

class Circle
{
public:
	Circle() { r =0; }
	Circle(int x) { r =x; }
	void setr(int y) { r =y; }
	int getr() const { return r; }

	int operator<(const Circle &c1)
	{
			if(getr() < c1.getr() )
				return 1;
			else
				return 0;

	}
private:
		int r;

};


int operator>(Circle &c1, Circle &c2)
{
	    printf("hi this is working");
		if( c1.getr() > c2.getr())
				return 1;
		else 
				return 0;
}

int main()
{
	Circle c1(7);
	Circle c2(2);
	if(c1 > c2)
		printf("c1 is big");
	else if( c1 < c2)
		printf("c1 is small");
	else
		printf("c1 and c2 are equal");


}














