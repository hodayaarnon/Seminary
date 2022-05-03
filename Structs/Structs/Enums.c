#define _CRT_SECURE_NO_WARNINGS

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef enum
{
	red,
	blue,
	white,
	black=230,
	pink
}color;

void main()
{
	color c;
	c = pink;

	printf("%d\n", c);
}