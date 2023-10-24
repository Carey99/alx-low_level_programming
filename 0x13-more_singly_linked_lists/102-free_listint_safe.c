#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - frees a listint_t list
* @h: Points through the list
* Return: Size of list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		nodes++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h || current == NULL)
		{
			*h = NULL;
			break;
		}
	}

	return (nodes);
}
