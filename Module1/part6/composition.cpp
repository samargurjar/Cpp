#include  <stdio.h>
#include <stdlib.h>

class Employee
{

public:
	~Employee() { printf("employee destroyed"); }

};

class Company
{
private:
		Employee &e;
public:
		Company(Employee &y):e(y)
		{
				}

		~Company()
		{
			printf("company destroyed ");
		}
};

int main()
{
	Employee e;
	{
			Company obj1(e);
	
	}
	printf("employee is stillt here");
	system("pause");


}




















#if 0

class Thread
{
public:
	~Thread() { printf("thread destroyed"); }

};

class Process
{
		Thread t;
public:
		~Process()
		{
			printf("process destroyed");
		}

};

int main()
{
	{		
		Process obj1;

		}
	system("pause");

}
#endif