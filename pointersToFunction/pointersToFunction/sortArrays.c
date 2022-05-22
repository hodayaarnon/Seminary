#include "stdio.h"
#include "stdlib.h"
#include "Arrays.h"
#include "string.h"

typedef int (*ptrCmp)(void* x, void* y);



void bubbleSort(void* arr, int len, int size, ptrCmp cmp)
{
	void* temp = malloc(size);

	int sort = 0;
	for (int i = 0; i < len - 1 && !sort; i++)
	{
		sort = 1;
		for (int j = 0; j < len - i - 1; j++)
		{
			char* ptr = (char*)arr + size * j;
			if (cmp(ptr, ptr+size) > 0)   //*(arr+j)
			{
				memcpy(temp, ptr, size);
				memcpy(ptr, ptr+size, size);
				memcpy(ptr + size, temp, size);
				/*temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				sort = 0;
			}
		}
	}
}



/*
void main()
{
	int arr[] = { 18,271,7893,4,110 };

	scanArray(arr, 5, print);
	printf("**********************\n");

	bubbleSort(arr, 5, sizeof(int), cmpCountD);
	scanArray(arr, 5, print);
	printf("**********************\n");


	bubbleSort(arr, 5, sizeof(int), cmpValue);
	scanArray(arr, 5, print);
	printf("**********************\n");



	bubbleSort(arr, 5, sizeof(int), cmpRightDigit);
	scanArray(arr, 5, print);
	printf("**********************\n");

}

*/