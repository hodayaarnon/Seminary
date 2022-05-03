/*
#define _CRT_SECURE_NO_WARNINGS

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct book {
	long code;
	char name[20];
	int numberOfPages;
	float price;
	char author[15];
};

typedef struct 
{
	char *name;
	struct book *arr[3];
}library;

void printBookStruct(struct book b1)
{
	printf("Book code: %ld name: %s, the price: %.2f, number of pages: %d.\n the author: %s\n",
		b1.code, b1.name, b1.price, b1.numberOfPages, b1.author);
}

//פונקציה היוצרת מבנה וממלא אותו בנתונים, לבסוף מחזירה את המבנה המוכן
struct book scanBook()
{
	struct book b1;
	printf("Enter details of the second book: (name and author)\n");
	gets(b1.name);
	gets(b1.author);

	printf("code, pages and price:\n");
	scanf("%ld %d %f", &b1.code, &b1.numberOfPages, &b1.price);
	return b1;
}


void scanBook1(struct book *b1)
{
	printf("Enter details of the second book: (name and author)\n");
	gets((*b1).name);
	gets(b1->author);

	printf("code, pages and price:\n");
	scanf("%ld %d %f", &((*b1).code), &b1->numberOfPages, &b1->price);
}


void main()
{
	struct book b1 = { 111111,"Magen enoshi", 734, 80.4, "Yona sapir" };
	struct book b2= scanBook();   //בקבלת הערך המוחזר תתבצע העתקת תוכן של שטח הזיכרון של המבחנה שהוגדר בפונקציה אל שטח הזכרון של המבנה שהוגדר כאן
	struct book b3;

	scanBook1(&b3);
	
	printBookStruct(b1);
	printBookStruct(b2);

	library l1 = { _strdup("eironit"), {&b1,&b2,&b3} };

	for (int i = 0; i < 3; i++)
		printBookStruct(*(l1.arr[i]));



	library lArray[2];
	lArray[0].name = (char*)malloc(15 * sizeof(char));
	scanf("%s",lArray[0].name);

	puts(lArray[0].name);


}
*/