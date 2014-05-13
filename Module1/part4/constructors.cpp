#include <stdio.h>

/*
conditionally create objects. ( you need one class)
initalize non static variables
not to create the object of the class. ( you need another class)
allocate memory for non static variables of the class.


  */

class ArithmeticOperation
{

private:
	ArithmeticOperation() {  }
public:
	int static add(int x, int y) { return x+y; }
	int static minus(int x, int y) { return x-y; }


}

class Process
{
public:
	Process(int x) { processId = x; } // conditionally create objects.
	Process(int x, char processName[])
	{
			processId = x;
		processName = malloc(strlen(processName)+1);

	}


private:
		int processId;
		char *processName;

};


int main()
{
	Process obj1(3);
	return 0;
}