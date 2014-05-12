#include <stdio.h>
/*

   pointers are mechanism to ensure we get pass by address
   dynamic alloation.

  pass by address.
  conserve memory.

  typically what we have to know
  1. tell that some variable is a pointer. 
  2. it stores some variable address.
  3. depending on the type of pointer we got
  we can operate on that particular address.

  flow in pointers.
  1.1 pass by address.
  1.2 const pointer
  1.3 pointer to a const or double const.
  1.4 null.
  1.5 dynamic allocation.

  NUll
  1. null is formal defintion of garbage
  2. we know system knows.
  3, NULL IS ASSIGNED ONLY TO POINTER.
4.  WHEN WE USE NULL WE TYPICALLY COMPARISON.


  DYNAMIC ALLOCATION.
  1. we can allocate dealocate memory at runtime on need basis.
  2. dynamic allocation we are going to use the heap area.
  3. what is heap, area controlled by programmer.
  4. what is non heap , area controlled by system, NO i want to control
  non heap, ok get slapped by the system.
  5. anything on heap, surely something must be on non heap. 
  typical something is a pointer.

  malloc what it does , it allocates memory
  on the heap and returns the starting address.

 malloc tells tell me how many bytes you want.
 we tell 30 or we tell 7 or 13 does not matter
 it tells ok so many number bytes it does give.
 what to do with this bytes, answer is if we dont
 know why we allocated memory.


dynamic alloation
1. use memory from heap
2. use malloc and store starting and dont lose the starting address
and free it by using starting address.
3. danglilng pointer -- some thing on non heap area, pointing
to something on heap and we are operating on this pointer.
then it is a runtime error.
4. memory leak is we have something on heap and non thing
on non heap area.
5. there is table maintained which tells shsytem which address
to which address memory is allocated.
malloc may put an entry this
free may remove an entry from this.

  I like dynamic memory allocation ok use it.
  I dont like dynamic memory allocation ok dont use it.










function pointer and void ptr.
in both cases, the first thing, these are important concepts.
you wont understand important concepts in any programming
lnaguage until you know and "believe" in developer anthem.

  void ptr.

  1.  void ptr can hold address of any type ie it can hold int pointer 
  it can hold char ptr ...
  2. we cannot operatoe on void ptr.
  3. we typically operate on void ptr after type casting the void ptr
  to whatever we want like.

  
	*/


int main()
{
	void *ptr=NULL;
	char *z=NULL;
		char c ='A';
		ptr = &c;
		z = (char*)ptr;
		*z ='B';
		printf("%c",c);
}









	


























#if 0

int main()

{
//want some memory in heap
	char *x = malloc(7); // ok we 7 bytes in heap area.
	char *const y =x; //pointer assignment
	// x is on stack and what x is pointing to is  on heap.
	
	free(y);
	free(x); // Invite Trouble






	return 0;
}









int main()
{
		int *x=NULL;
		if( x != NULL) // ifwe use NULl we an always compare.
			free(x);
		printf("program is not giving runtime error");


}


struct Mobile
{
		int mobileId;
		int mobileType;

};

void fillupX(struct Mobile *const z);
void printDetailsOfx(const struct Mobile *const z);


int main()
{
		struct Mobile x;//  assume x is defined only then variables of
		//structure ie mobileId and mobileType will be defined.
		struct Mobile *z=NULL;
		z= &x;
		fillupX(z);
		printDetailsOfx(z);
		

}

void fillupX(struct Mobile *const z)
{
	
	z->mobileId=40;
	z->mobileType=50;

}


void printDetailsOfx(const struct Mobile *const z)
{

printf("%d %d",z->mobileId,z->mobileType);


}








#endif
