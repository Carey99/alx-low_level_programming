#include "lists.h"
/**
 * get_dnodeint_at_index - Return node at a particular index
 * @head: Pointer to first node
 * @index: Index of node to be return
 * Return: Node specified by index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
	head = head->next;
	i++;
	}
	return (NULL);
}
