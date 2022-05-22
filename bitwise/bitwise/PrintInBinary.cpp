#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "math.h"
/*
#define K *p
#define L &K
void main()
{
	int x[] = { 8,2,10 };
	int K = x;
	x[0] = *(++p);
	*(K + --p) = K;
	for (;L - x < 3;L++)
		printf("%d ", K);
}*/#define F(d) sizeof(d)
#define G(a,b) F(a)+F(b)
void main()
{
	int arr[] = { 1,2,3 };
	char str[10] = "hello";
	unsigned int a = 0x78, b = 015, c, d;
	d = G(str, *str) * 2;
	printf("%d\n", d);
	c = a & b << F(c);
	printf("%d\n", c);
	a = a ^ F(arr) - F(arr + 1) + F(*(arr + 2));
	b = a | b >> arr[*arr];
	printf("a=%x, b=%x, c=%x, d=%x\n\n", a, b, c, d);
	system("pause");
}
/*
void basicPrint(int number)
{
	unsigned int mask = 0x80000000;

	while (mask)
	{
		printf("%d ", (number & mask) != 0);
		mask >>= 1;
	}
}

void ex2(int x)
{
	unsigned int num = pow(2, x - 1);
	while (num)
	{
		basicPrint(num);
		Sleep(250);
		for (int i = 0; i < x; i++, printf("\b\b"));
		num >>= 1;
	}
}


void main()
{
	ex1(32);
	//basicPrint(72);

}*/

/*
void ex2(int x)
{
	int i;
	for (i = 0; i < x; i++)
		printf("0 ");
	Sleep(1000);
	for (i = 0; i < x; i++)
		printf("\b\b");
	printf("\b");
	for (i = 0; i < x; i++)
	{
		printf("1");
		Sleep(1000);
		printf("\b0 ");
	}
}
*/
