#include<stdio.h>
#include<conio.h>
class processor
{
public:
	processor(){printf("base class constructer");}
	processor(int i){printf("base class parametrized constructer");}
	virtual ~processor(){printf("base class destructor");}
	void setspeed(int s){processorSpeed = s; }
	virtual void version(){printf("SMBIOS Version Support 1.4");}
	virtual void PCIRootPortId()=0;

private:
	int processorSpeed;
	int biosVersionSupport;
};

class intelcorei3:public processor
{
public:
	intelcorei3(){printf("derived class constructer");}
	intelcorei3(int c):processor(c) {printf("derived class constructer");}
	~intelcorei3(){printf("derived class destructor");}
	void setnoc(int a){noofcores = a; printf("no. of cores accepted");}
	void version(){printf("SMBIOS Version Support 2.4");}
	virtual void PCIRootPortId(){printf("PCIRootPortId= 0045");}

private:
	int noofcores;

};
class athelon:public processor
{
public:
	athelon(){printf("derived class constructer");}
	athelon(int d):processor(d) {printf("derived class constructer");}
	~athelon(){printf("derived class destructor");}
	void setmb(int a){motherboardSupports = a; printf("Asus and Toshiba");}
	void version(){printf("SMBIOS Version Support 2.0");}
	virtual void PCIRootPortId(){printf("PCIRootPortId= 1230");}

private:
	int motherboardSupports;
};
processor* get()
{
	int choice=0;
	processor *i=NULL;
	printf("\n1:intel series processor\n 2:Athelon series processor\nenter choice");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
		i=new intelcorei3;
		break;
	case 2:
		i=new athelon;
		break;
	default:
		printf("not correct choice");


	};
	return i;


}

int main()
{
	processor *y=new athelon;
	delete y;
	processor *i=get();
	i->version();

	getch();



}