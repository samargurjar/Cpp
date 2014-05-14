#include <stdio.h>

class Mobile
{

	public:
		void f1(int x) { imeinumber =x ; }
		static void f2(int y) { makeId = y;   }

		
		
	private:
		int imeinumber;
		static int makeId;


};

int Mobile::makeId =2;






int main()
{
	Mobile i;
	i.f1(3); 
	Mobile::f2(3);
	i.f2(4);
	return 0;

	//Mobile::f1(3); //this wont compile

	

	



return 0;
}