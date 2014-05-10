#include <stdio.h>
#include <stdlib.h>

void f1(int *x)
{
	x = (int*)malloc(sizeof(int));
	*x = 44;
}

int main()
{
	int *y =NULL;
	f1(y);
	printf("%d",*y);

}
