#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_listint2 - Free lists and set head to NULL
* @head: Points nodes to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
	return;
	}
	while (*head)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	*head = NULL;
}
