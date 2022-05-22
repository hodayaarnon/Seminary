#include "stdio.h"
#include "stdlib.h"
#include "Arrays.h"
/*
typedef int (*ptrCmp)(int x, int y);

int countDigit(int number)
{
	int counter = 0; 
	while (number)
	{
		counter++;
		number /= 10;
	}
	return counter;
}

int cmpCountD(int x, int y)
{
	int cntX = countDigit(x);
	int cntY = countDigit(y);
	return cntX - cntY;
}

int cmpValue(int x, int y)
{
	return x-y;
}

int cmpRightDigit(int x, int y)
{
	return x % 10 - y % 10;
}



void bubbleSort(int* arr, int len, ptrCmp cmp)
{
	int sort=0, temp;
	for (int i = 0; i < len - 1  && !sort; i++)
	{
		sort = 1;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (cmp(arr[j], arr[j + 1]) > 0)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				sort = 0;
			}
		}
	}
}




void main()
{




	int arr[] = { 18,271,7893,4,110 };

	scanArray(arr, 5, print);
	printf("**********************\n");

	bubbleSort(arr, 5, cmpCountD);
	scanArray(arr, 5, print);
	printf("**********************\n");


	bubbleSort(arr, 5, cmpValue);
	scanArray(arr, 5, print);
	printf("**********************\n");



	bubbleSort(arr, 5, cmpRightDigit);
	scanArray(arr, 5, print);
	printf("**********************\n");

}

*/