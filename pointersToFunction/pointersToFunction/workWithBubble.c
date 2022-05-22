#include "stdlib.h"
#include "stdio.h"
#include "Arrays.h"

typedef struct {
	int x;
	int y;
}Point;

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

int cmpCountD(void* x, void* y)
{
	int cntX = countDigit(*((int*)x));
	int cntY = countDigit(*((int*)y));
	return cntX - cntY;
}

int cmpValue(void* x, void* y)
{
	return *((int*)x) - *((int*)y);
}

int cmpRightDigit(void* x, void* y)
{
	int a = *((int*)x);
	return a % 10 - *((int*)y) % 10;
}

int cmpStr(void* str1, void* str2)
{
	return strcmp((char*)str1, (char*)str2);
}

int cmpByY(void* p1, void* p2)
{
	Point* ptr1 = (Point*)p1;
	return ptr1->y - ((Point*)p2)->y;
}

const char* fun()
{
	char* str = malloc(10);
	return str;
}

void main()
{
	Point arr[] = { {2,8},{9,3},{1,5},{7,4},{9,2} };

	bubbleSort(arr, 5, sizeof(Point), cmpByY);
}