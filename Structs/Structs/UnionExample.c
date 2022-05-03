#define _CRT_SECURE_NO_WARNINGS

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef union 
{
	long num;
	char str[12];
}phone;

/*

void main()
{
	phone p;
	
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(phone));

	p.num = 527164726;
	printf("%ld\n", p.num);
	puts(p.str);

	strcpy(p.str, "052-7164726");
	puts(p.str);
	printf("%ld\n", p.num);

}
*/