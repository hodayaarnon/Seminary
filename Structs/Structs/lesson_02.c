#define _CRT_SECURE_NO_WARNINGS

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct 
{
	char name[20];
	int numOfHour;
}
subject;


typedef struct
{
	char *name;
	int numCourses;
	subject* courses;
	int seniority;
}
teacher;

void scanSubject(subject* s)
{
	gets(s->name);
	scanf("%d", &s->numOfHour);
}

teacher* BuildTeacher(char* name)
{
	teacher* t = (teacher*)malloc(sizeof(teacher));
	t->name=_strdup(name);
	printf("Enter seniority of Mrs %s\n", name);
	scanf("%d", &t->seniority);
	printf("Enter number of courses of Mrs %s\n", name);
	scanf("%d", &t->numCourses);

	t->courses = (subject*)malloc(t->numCourses * sizeof(subject));
	for (int i = 0; i < t->numCourses; i++)
	{
		//scanSubject(&t->courses[i]);
		getchar();
		printf("Enter name and number of hour for course number %d:\n", i + 1);
		scanSubject(t->courses + i);
	}

	return t;
}

void printSubject(subject* s)
{
	printf("%s hours: %d\t", s->name, s->numOfHour);
}

void printTeacher(teacher *t)
{
	printf("teacher name %s, seniority years: %d.\n\tcourses: ", t->name, t->seniority);
	for (int i = 0; i < t->numCourses; i++)
	{
		printSubject(t->courses+i);
	}
	printf("\n");
}

void freeMemory(teacher** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		free(arr[i]->courses);
		free(arr[i]);
	}

	free(arr);
}

/*
void main()
{
	teacher** arr = NULL;
	char name[30];
	int size=0;

	printf("Enter teacher name, to finish press 'end': ");
	gets(name);

	while (_stricmp(name, "end"))
	{
		arr = (teacher **)realloc(arr, (size + 1) * sizeof(teacher*));
		arr[size++] = BuildTeacher(name);
		getchar();
		printf("Enter teacher name, to finish press 'end': ");
		gets(name);
	}

	for (int i = 0; i < size; i++)
	{
		printf("Teacher number %d:\n------------------------\n",i+1);
		printTeacher(arr[i]);
	}

	freeMemory(arr,size);
	arr=NULL;
}
*/