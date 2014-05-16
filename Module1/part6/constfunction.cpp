#include <stdio.h>

// start of h file  -- A
class Circle
{
public:
	Circle() { }
	void setr(int k);
	int getr() const;
private:
		int r;
};
//end of h file.

//impleemnt cpp --- B
void Circle::setr(int k) { r =k ; }
int Circle::getr() const { int k=3; k =5;  return r; }

// C - will use h and the dll or lib 
int main() 
{
		Circle c;
		const Circle c1(4);
		c.setr(3);
		printf("%d",c.getr());
			

}


















