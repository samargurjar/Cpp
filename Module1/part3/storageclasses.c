/*

	storage class talks about variables in non heap area.

   storage class talks about how long a variable
   is available in memory.

  in C storage classes are 4.

	register, auto -- applies only to local variables.
	one variable can be associated with only one storage class.

	static and extern -- suspend it.

  when it comes it to static.

  1. static storage class.
			local variable which is static, means
				variable storate class is static.

  2. static in context of linkage.
  when a global variable is static we are talking
  about linkage , linkage can be spoken only
	 if we have 2  .c files.

  In the project 
  storageclasses.c
	test.c 

  we have a global variable called i in test.c
  we want to access i in storageclasses.c

  once we talk about global variables being static
  or non static.


  a gloval variable which is static, has got
  only internal linkage.

  ie suppose we got a global variable called j
  in a file called 1.c and try to access this
  global variable in 2.c , if j is static, it is not accessible
  in 2.c, if we try to access it we get a a linker error.
  if we remove static from j, then j be accessed in 
  2.c provided we did an extern declaration on j.
























*/





#include <stdio.h>

extern int i;




int gl=0;


void f1(void);
void f3(void);
void f4(void);

int main()
{

	i =4;	
	f7();

	#if 0
	
	f4();//testing global variables present in other files 


	f1();
	f1();

	f3(); // to prove static storage class
	f3();

	#endif

		
	return 0;
}


void f4(void)
{
	i =4; // we are trying to access i of test.c
}

void f1()
{
		register int i =0;
		auto int j=1;
#if 0
		register auto int k =3; // to prove one variable only
		//one storage class.
#endif
		printf("\n %d %d",i,j);


}







void f3(void) // to prove static storage class
{

	static int i=0; // here i is of static storage class.
	i++;
	printf("%d",i);

	//  i is available in memory from the moment 
	//program starts till the program ends.
	// when we come out f3, i continues to exist
	//but is not accessible.
	//hence we can say i scope is local but
	//storage class is static


}

