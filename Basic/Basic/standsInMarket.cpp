#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "string.h"

//מקבלת שם דוכן ומחזירה את האינדקס שלו במערך
int searchStand(char** stands, int numStands, char* stand)
{
	int i;
	for (i = 0; i < numStands && strcmp(stand, stands[i]); i++);
	return i == numStands ? -1 : i;
}


void addStand(char*** stands, float*** sells, int** size, int* numStands)
{
	char name[30];
	printf("Enter the name of the new stand: ");
	gets_s(name);
	//טיפול בהקצאת מערך שמות הדוכנים
	(*stands) = (char**)realloc(*stands, (*numStands + 1) * sizeof(char*));
	(*stands)[*numStands] = _strdup(name);

	//טיפול בהקצאת מערך השקילות
	(*sells) = (float**)realloc(*sells, (*numStands + 1) * sizeof(float*));
	(*sells)[*numStands] = NULL;

	//טיפול בהקצאת מערך מספר השקילות
	(*size) = (int*)realloc(*size, (*numStands + 1) * sizeof(int));
	(*size)[*numStands] = 0;

	(*numStands)++;
}


void addSell(char** stands, float** sells, int* size, int numStands)
{
	char name[30];
	printf("Enter the name of the new stand: ");
	gets_s(name);

	//איתור הדוכן ע"י פונקציית עזר
	int index = searchStand(stands, numStands, name);
	if (index == -1)
	{
		printf("The stand is not exists...\n");
		return;
	}

	sells[index] = (float*)realloc(sells[index], (size[index] + 1) * sizeof(float));
	printf("Enter the kg: ");
	scanf_s("%f", &sells[index][size[index]]);
	size[index]++;
}

void printMarketState(char** stands, float** sells, int* size, int numStands)
{
	float sum, sumAll = 0;
	for (int i = 0; i < numStands; i++)
	{
		sum = 0;
		puts(stands[i]);
		printf(":\t");
		for (int j = 0; j < size[i]; j++)
		{
			printf("%.2f\t", sells[i][j]);
			sum += sells[i][j];
		}
		printf("\nsum kg in this stand: %.2f\n", sum);
		sumAll += sum;
	}
	printf("sum of all the market is: %.2f\n", sumAll);
}


void removeStand(char*** stands, float*** sells, int** size, int* numStands)
{
	char name[30];
	printf("Enter the name of the new stand: ");
	gets_s(name);

	//איתור הדוכן ע"י פונקציית עזר
	int index = searchStand(*stands, *numStands, name);
	if (index == -1)
	{
		printf("The stand is not exists...\n");
		return;
	}
	//שחרור שטח המחרוזת של שם הדוכן ושחרור מערך הקילות של דוכן זה
	free((*stands)[index]);
	free((*sells)[index]);
	//דריסת האיבר של הדוכן בשלושת המערכים
	for (; index < (*numStands)-1; index++)
	{
		(*size)[index] = (*size)[index + 1];
		(*stands)[index] = (*stands)[index + 1];
		(*sells)[index] = (*sells)[index + 1];
	}
	//הקצאה מחודשת שטחי הזכרון לצורך הקטנתם
	(*stands) = (char**)realloc(*stands, (*numStands - 1) * sizeof(char*));
	(*sells) = (float**)realloc(*sells, (*numStands - 1) * sizeof(float*));
	(*size) = (int*)realloc(*size, (*numStands - 1) * sizeof(int));

	(*numStands)--;
}

void closeMarket(char** stands, float** sells, int* size, int numStands)
{
	for (int i = 0; i < numStands; i++)
	{
		free(stands[i]);
		free(sells[i]);
	}
	free(size);
	free(stands);
	free(sells);
}



void main()
{
	char** stands = NULL;
	float** sells=NULL;
	int* size = NULL;
	int numStands=0;

	int op;

	printf("Enter:\n  1- to add stand\n  2- to add sell\n  3- to print market state\n 4- remove stand\n  5- to exit\n");
	scanf_s("%d", &op);

	while (op != 5)
	{
		getchar();
		switch (op)
		{
			case 1: addStand(&stands, &sells, &size, &numStands); break;
			case 2: addSell(stands, sells, size, numStands); break;
			case 3: printMarketState(stands, sells, size, numStands); break;
			case 4: removeStand(&stands, &sells, &size, &numStands); break;
		}
		printf("Enter:\n  1- to add stand\n  2- to add sell\n  3- to print market state\n 4- remove stand\n  5- to exit\n");
		scanf_s("%d", &op);
	}

	closeMarket(stands, sells, size, numStands);

}