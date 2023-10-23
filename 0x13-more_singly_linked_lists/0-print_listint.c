#include "lists.h"
#include <unistd.h>
#include <stdio.h>

/**
* print_listint - Prints all elements
* @h: Lists of nodes
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	printf("%u\n", h->n);
	h = h->next;
	}
	return (nodes);
}
