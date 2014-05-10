#include <stdio.h>

class Mobile
{
	public:
		int imeinumber;
		static int makeId;


};

int Mobile::makeId =2;






int main()
{
	Mobile i,j;
	i.imeinumber=4;
	j.imeinumber=5;
	Mobile::makeId =2; // proof we can call a static variable without an object.
	Mobile::imeinumber=4; // Certificate of Stupidity

	



#if 0
	i.makeId=45;
	j.makeId=46;
#endif
	printf("%d %d %d",i.imeinumber,j.imeinumber,i.makeId);


return 0;
}