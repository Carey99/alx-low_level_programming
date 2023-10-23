#include "lists.h"
#include <stdio.h>

/**
* listint_len - Returns number of element
* @h: Contains lists of nodes
* Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
	nodes++;
	h = h->next;
	}
	return (nodes);
}
