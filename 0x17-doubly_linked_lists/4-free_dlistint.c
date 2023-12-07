#include "lists.h"
/**
 * free_dlistint - Free list
 * @head: Points to first node
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
