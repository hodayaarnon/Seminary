#include <stdio.h>
#include <stdlib.h>


void printMat(int mat[][3])
{

}



void printArray(int arr[])
{
	for (int i = 0; i < 12; i++)
		printf("%d\t", arr[i]);

	printf("\n");

}

/*

void main()
{
	printf("%d   %d\n", sizeof(int), sizeof(char));
	int arr[10];
	printf("arr=%d  &arr=%d\n", arr,&arr);
	printf("%d\n", sizeof(arr));

	arr[0] = 1;
	printf("%d\n", *arr);
	*(arr + 2) = 10;
	//arr[11] = 33;

	int* brr = arr;
	printf("%d\n", *(brr + 2));

	printf("brr=%d  &brr=%d\n", brr, &brr);
	printf("%d\n", sizeof(brr));

	printf("%d   %d\n", brr[0], *brr);
	*(brr + 4) = 8;


	brr++;
	printf("brr=%d  &brr=%d\n", brr, &brr);

	printArray(arr);


	int mat[3][4];

	mat[0][3] = 23;
	

}
*/