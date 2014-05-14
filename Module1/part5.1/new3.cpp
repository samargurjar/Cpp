#include<stdio.h>

class thread2
{
public:
	thread2(int *x)
	{
		*pid=*x;
		x=new int;
		printf("constructer is getting called");

	}
	void setx(int i)
	{
		*x=i;

	}
	int getx(){ return *x;}
	~thread2()
	{
		delete x;
		printf("destructer is called");

	}

private:
	int *pid;

};

int main()

{
	return 0;

}



#if 0
class thread
{
public:
	thread(int pid)
	{
		processId = pid;
		printf("\nconstructer is called");

	}
	~thread()
	{
		printf("\ndestructer is called");

	}
	int getpid(){return processId;}

private:
	int processId;


};

int main()
{
	thread one(1);
	thread two=one; // example of default constructer 
	printf("%d",two.getpid());
	return 0;


}
#endif