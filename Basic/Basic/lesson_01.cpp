#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void printInBinary(int num)
{
	printf("\t\t");
	while (num)
	{
		printf("%d\b\b\b", num % 2);
		num /= 2;
	}
	printf("\n");
}

/*
void main()
{
	//printInBinary(8);
	printf("234\t234\n");
	printf("3574h57wb457nw57n\raaa\n");
	printf("\\t\n\\r\\b\n");
	printf("sdfgl'dfg\n");
	printf("sdfgl\vdfg\n");
	printf("\"\n");
	
	char a, b;
	b = _getch();
	a = getchar();

	printf("%c %c\n", b, a);
	printf("Hello girls!! Have a good luck!!\n");

	int x,z;
	printf("Enter two numbers: ");
	scanf_s("%d%d", &x, &z);

	printf("x = %d\n", x);
	printf("\a");

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
			printf("%4d", i * j);
		printf("\n");
	}


	float y = 13.6895234854;
	printf("\a");
	printf("%d\n", (int)y);
	printf("%.1f\n", y);
	printf("%.0f\n", y);
	printf("%6.2f\n", y);


	printf("Enter a char:");
	char ch;
	_flushall(); //אמורה לנקות חוצץ...
	getchar();  //לצורך ניקוי החוצץ במקום הפונקציה החביבה שבגרסאות מתקדמות משום מה לא מבצעת דבר...
	scanf_s("%c", &ch);
	printf("%c\n", ch);

	getchar();

	char str[10]="a";
	printf("str=%s %d, %p\n", str, str, str);
	char *str1 = str;
	scanf("%9s", str);

	gets_s(str);
	puts(str);
	printf("%s\n", str);
	
	for (int i = 0; i < 10; i++)
		printf("%c", str[i]);

	printf("\n");

	//printf("\a");
}
*/