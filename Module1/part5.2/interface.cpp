#include <stdio.h>

class Algorithm
{
public:
		virtual void arrange(int x[])=0;
		virtual void search(int x[])=0;
};

class IBMAlgorithm :public Algorithm // Interface Realization or I implementation
{
public:
	void arrange(int x[]) { printf("ibm sort at work"); }

};


class MSAlgorithm :public Algorithm // Interface Realization or I implementation
{
public:
	void arrange(int x[]) { printf("ms sort at work"); }

};

class NokiaAlgorithm :public Algorithm // Interface Realization or I implementation
{
public:
	void arrange(int x[]) { printf("nokia sort at work"); }

};



Algorithm* get() // assume this comes in a header file
{
	Algorithm *x =new NokiaAlgorithm;
	return x;

}

int main()
{
		Algorithm *y =get();
		int arra[]={2,3};
		y->arrange(arra);
		return 0;


}