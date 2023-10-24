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

	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
