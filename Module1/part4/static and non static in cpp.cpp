#include <stdio.h>

class Sensor
{
public:
	int getSensorId() { return sensorId; }
	   void setSensorId(int sensorId)  {  this->sensorId = sensorId; }
	   static int getCompanyId() { return companyId; }
	   static void setcompanyId(int z) { companyId = z;  
#if 0
	   this->companyId = z;   //this is not accessible inside static

				setSensorId(4); //non sttaic resource  cannot
				//be accessed inside static directly

				#endif
	   
	   }



private:
		int sensorId;
		static int companyId;
};

int Sensor::companyId =1;






/*

  static variables -- common across objects
  and also can be accessed  without the object.
  non static variables -- for two objects these variables are unique


  static and non static function

  static function
  1. expose static variable
  2. dont need an object.
  3. cannot access non static things.
  4. this not accessible.

  non static function
  1. expose non static variables
  2. needs an object
  3. can access this
  4. can access static part.











  */

int main()
{
	Sensor obj1, obj2;
	obj1.setSensorId(2);
	obj2.setSensorId(3);
	obj1.setcompanyId(3); // static function can be caleld with obuject also
	Sensor::setcompanyId(44); // static function can be called without object
	printf("%d %d %d",obj1.getSensorId(),obj2.getSensorId(),
		obj2.getCompanyId());

#if 0
	Sensor::setSensorId(5); // nons tatic function cannot be called until
	// we have an object
#endif
	return 0;

}
