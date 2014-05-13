#include <stdio.h>

class SD
{
public:
	SD() { printf("hi this is constructor"); }
	~SD() { printf("hi I am  a destructor"); }


};

class TempSensor
{
public:
			


			TempSensor(int nos)
			{
					totalNumberOfSensors = (int*) malloc(sizeof(int)*nos);

			}

			~TempSensor()
			{
						free(totalNumberOfSensors);

			}





private:
			int *totalNumberOfSensors;

};




int main()
{
	{
	TempSensor   i(3);
	}
	printf(" i is removed from memory");
	return 0;

}























