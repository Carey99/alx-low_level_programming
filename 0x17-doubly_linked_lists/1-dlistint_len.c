#include "lists.h"
/**
 * dlistint_len - Returns number of elements in a linked lists
 * @h: Head to all nodes
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
