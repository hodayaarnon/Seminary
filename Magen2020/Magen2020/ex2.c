#include "stdlib.h"
#include "stdio.h"
#include "string.h"


int fun2(char** str, char*** arr)
{
	char* s = *str, *open, *close, sNum[4];
	int counter = 0;
	*arr = NULL;
	
	while (open = strchr(s, '('))
	{
		close = strchr(s, ')');
		*arr = (char**)realloc(*arr, (counter + 1) * sizeof(char*));
		*close = '\0';
		(*arr)[counter++] = _strdup(open + 1);
		*(open + 1) = '\0';
		strcat(s, itoa(counter,sNum,10));
		*close = ')';
		strcat(s, close);
		s = close + 1;
	}


	*str = (char*)realloc(*str, (strlen(*str) + 1) * sizeof(char));
	return counter;
}




void main()
{

}

