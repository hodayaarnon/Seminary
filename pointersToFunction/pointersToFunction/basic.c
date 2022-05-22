
#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"

typedef int (*action)(int item);



void printHello(int x)
{
	for (int i=0; i < x; i++)
		printf("Hello!!\t");
	printf("\n");
}
/**/

int print(int item)
{
	printf("%d\t", item);
	return item;
}

int multi2(int item)
{
	return item * 2;
}


void scanArray(int* arr, int n, action act)
{
	for (int i = 0; i < n; i++)
		arr[i]=act(arr[i]);
	printf("\n");
}



/*

void main()
{
	printHello(4);

	void (*ptrPrintFunc)(int x);
	ptrPrintFunc = printHello;

	ptrPrintFunc(8);



	int arr[] = { 1,2,3,4,5 };

	scanArray(arr, 5, print);
	printf("**********************\n");
	scanArray(arr, 5, multi2);
	scanArray(arr, 5, print);


}
*/