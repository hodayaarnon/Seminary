#include <stdio.h>
#include <stdlib.h>



void Swap(int *a, int *b)
{
	printf("a= %d  b= %d\n", a, b);
	printf("&a= %d  &b= %d\n", &a, &b);
	printf("*a= %d  *b= %d\n", *a, *b);

	int temp = *a; 
	*a = *b;
	*b = temp;

}


/*

void main()
{
	int x = 3, y = 5;
	printf("&x= %d  &y= %d\n", &x, &y);


	Swap(&x, &y);

	printf("x=%d  y=%d\n", x, y);
}

*/