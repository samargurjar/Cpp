#include<stdio.h>

class train
{
public:
	void setn(int n)
	{
		trainName = n;
		
	}
	int getn(){return trainName;}
	
	static void sets(int l)
	{
		speedlimit = l;


	}
	static int gets(){return speedlimit;}


private:
	int trainName;
	static int speedlimit;

};


int train::speedlimit = 100;
int main()
{
	train o1,o2;
	o1.setn(1);
	o2.setn(2);
	o1.sets(101);
	o2.sets(200);

	printf("%d %d %d %d",o1.getn(),o2.getn(),o1.gets(), o2.gets());

	return 0;

}