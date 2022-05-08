#define _CRT_SECURE_NO_WARNINGS

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct node 
{
	int value;
	struct node* next;
}node;

node* BuildList()
{
	node* head=NULL, *ptr=NULL, *temp;
	int val;

	printf("Enter numbers, to finish press -1:\n");
	scanf("%d", &val);

	while (val != -1)
	{
		temp = (node*)malloc(sizeof(node));
		temp->value = val;

		if (!head)
			head = ptr = temp;
		else
		{
			ptr->next = temp;
			ptr = temp;
		}
		scanf("%d", &val);
	}
	if (head)
		ptr->next = NULL;
	return head;
}


void PrintList(node* head)
{
	while (head)
	{
		printf("%d\t", head->value);
		head = head->next;
	}
	printf("\n");
}

void freeListMemory(node* head)
{
	node* temp;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void addToSortedList(node** head, int val)
{
	node *ptr, * temp = (node*)malloc(sizeof(node));
	temp->value = val;

	if (!*head || val<(*head)->value)
	{
		temp->next=head;
		(*head) = temp;
		return;
	}
	ptr = *head;
	while (ptr->next && ptr->next->value<val)
	{
		ptr = ptr->next;
	}

	temp->next = ptr->next;
	ptr->next = temp;

}

node* BuildSortedList()
{
	node* head = NULL;
	int x;
	printf("Enter numbers, to finish press 0:\n");
	scanf("%d", &x);
	while (x)
	{
		addToSortedList(&head, x);
		scanf("%d", &x);
	}
}

/**/
void main()
{
	node* head = BuildList();
	PrintList(head);

	freeListMemory(head);
}
