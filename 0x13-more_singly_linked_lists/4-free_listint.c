#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_listint - Free a listint list
* @head: Points to the nodes to be deleted
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
