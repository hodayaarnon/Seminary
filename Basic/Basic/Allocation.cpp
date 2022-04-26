#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"

#define MIN(a,b) a<b?a:b;

float* removeMin(float* arr, int *size)
{
	float min = 100;
	for (int i = 0; i < *size; i++)
	{
		min = MIN(arr[i], min);
	}

	int counter = 0;
	for (int i = 0; i < *size-counter; i++)
	{
		if (arr[i] == min)
		{
			for (int j = i; j < *size - counter; j++)
				arr[j] = arr[j + 1];
			counter++;
			i--;
		}
	}
	(*size) -= counter;
	return (float*)realloc(arr, (*size) * sizeof(float));
}

void removeMin(float** arr, int* size)
{
	float* a = *arr;
	float min = 100;
	for (int i = 0; i < *size; i++)
	{
		min = MIN(*(*arr+i) ,min);
	}

	int counter = 0;
	for (int i = 0; i < *size - counter; i++)
	{
		if ((*arr)[i] == min)
		{
			for (int j = i; j < *size - counter; j++)
				(*arr)[j] = (*arr)[j + 1];
			counter++;
			i--;
		}
	}
	(*size) -= counter;
	*arr= (float*)realloc(*arr, (*size) * sizeof(float));
}

void PrintArray(float* arr, int size)
{
	printf("The array is located in address %p\n\n", arr);
	for (int i = 0; i < size; i++)
	{
		printf("%.2f\t", arr[i]);
	}
	printf("\n");
}
/*
void main()
{
	int n, x, i;

	printf("Enter number of students: ");
	scanf_s("%d", &n);

	float* marks = (float*)malloc(n * sizeof(float));

	if (marks == NULL)
	{
		printf("Sorry, allocation failed...");
		exit(1);
	}


	printf("Enter %d marks:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%f", marks + i);// &marks[i]  //&(*(marks+i))
	}

	PrintArray(marks,n);

	printf("How many items to add? ");
	scanf_s("%d", &x);

	float *marks2 = (float*)realloc(marks, (n + x) * sizeof(float));
	if (marks2 == NULL)
	{
		printf("Sorry, allocation failed...");
		exit(1);
	}
	marks = marks2;

	printf("Enter the %d additional marks:\n", x);
	for (i = 0; i < x; i++)
		scanf_s("%f", marks + n + i);

	n += x;

	PrintArray(marks, n);

	removeMin(marks, &n);
	PrintArray(marks, n);
	

}
*/