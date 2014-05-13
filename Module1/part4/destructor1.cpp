#include <stdio.h>
#include <stdlib.h>

class Device
{
public:
	Device() { printf("constr at work "); deviceId = (int*)malloc(sizeof(int)); }

	~Device() { printf("destrac at work");  free(deviceId); }

	void setDeviceid(int x )   { *deviceId =x; }


private:
		int *deviceId;


};



int main()
{

	//Device *x = (Device*) malloc(sizeof(Device));
	Device *x = new Device;
	x->setDeviceid(23); 
	#if  0		
	free(x);
	#endif 
	delete x;
	return 0;
}








