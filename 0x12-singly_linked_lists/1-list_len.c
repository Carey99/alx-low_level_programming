#include "lists.h"
#include <stdio.h>

/**
* list_len - Returns the number of elements in alinked
* @h: List of nodes
* Return: number of elements in list_t
*/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
	nodes++;
	}
	return (nodes);
}
