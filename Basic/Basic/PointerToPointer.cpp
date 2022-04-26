#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "string.h"


void PrintArr(char** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		puts(arr[i]);
	}
}


void main()
{
	//char mat[5][30];  //תתקבל מטריצה בשטח זיכרון סטטי בגודל 5 על 30 והשם מאט מרחף על כל השטח
	
	char* mat[5];  //יתקבל מערך חד ממדי בשטח הסטטי בגודל 5, שכל איבר בו יצביע למחרוזת כאשר תוקצה כזו, כרגע כולם מצביעים לזבלי זיכרון
	
	mat[0] = _strdup("hello");
	mat[1] = _strdup("girls!");
	char str[30] = "sdfhsf";
	mat[2] = str;

	
	char** sArr;  //מצביע למצביע לתו, יוכל לשמש כמצביע למערך מחרוזות
	int n;

	printf("Enter number of students: ");
	scanf_s("%d", &n);
	getchar();
	sArr = (char**)malloc(n * sizeof(char*));  //בינתיים מה שהתקבל זהו מערך חד ממדי של אברים המסוגלים להצביע למחרוזות
	//puts(sArr[0]); עדיין לא ניתן לבצע גישה מכיוון שההצבעות מחזיקות זבלי זיכרון

	printf("Enter %d names: \n", n);
	for (int i = 0; i < n; i++)
	{
		gets_s(str);
		sArr[i] = _strdup(str);
	}

	PrintArr(sArr, n);

	printf("Enter the name of the new student: ");
	gets_s(str);

	sArr = (char**)realloc(sArr, (n+1) * sizeof(char*));
	sArr[n++] = _strdup(str);


	PrintArr(sArr,n);
}