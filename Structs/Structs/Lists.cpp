#define _CRT_SECURE_NO_WARNINGS

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef int nodeInfo

typedef struct node
{
	nodeInfo value;
	struct node* next;
}node;


node* buildList()
{
	node *head=NULL, *ptr, *temp;
	int val;
	printf("Enter numbers, to finish press -1:\n");
	scanf("%d", &val);

	while (val != -1)
	{
		temp = (node*)malloc(1 * sizeof(node));
		temp->value = val;

		if (head == NULL)
			head = ptr = temp;
		else
		{
			ptr->next = temp;
			ptr = ptr->next; // ptr=temp;
		}
		scanf("%d", &val);
	}
	if (head)
		ptr->next = NULL;
}


void main()
{
	node* head;


	node n1, n2, n3;
	n1.

}