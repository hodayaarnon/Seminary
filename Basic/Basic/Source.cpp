#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "string.h"

/*
void main()
{
	int array[2][3] = { 5,10,15,20,25,30 };

	printf("%d  %d  %d  %d\n", &array, array, *array, &array[0][0]);

	int(*ptr)[2][3] = &array;
	printf("%d\n", ptr);

	printf("%d\t", ***ptr);
	printf("%d\t", ***(ptr + 1));
	printf("%d\t", **(*ptr + 1));
	printf("%d\t", *(*(*ptr + 1) + 2));

}

*/