#include <stdio.h>
#include <stdlib.h>

#define K 5  
#define N 4

void printArray(char word[])
{
	for (int i = 0; i < N; i++)
		printf("%c ", word[i]);
	printf("\t");
}


void printPermutations(char word[], int index, int used[], char lang[])
{
	if (index == N)
	{
		printArray(word);
		return;
	}
	for (int i = 0; i < K; i++)
	{
		if (used[i])
			continue;
		word[index] = lang[i];
		used[i] = 1;
		printPermutations(word, index + 1, used, lang);
		used[i] = 0;
	}
}

/*
void main()
{
	char lang[K] = { '*','#','$','@','&' };
	int used[K] = { 0 };
	char word[N];

	printPermutations(word, 0, used, lang);



}
*/