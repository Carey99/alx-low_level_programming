#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_nodeint_at_index - Return the nth value
* @head: Points thoughout the list of nodes
* @index: Index of node starting at 0
* Return: Index else NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
		return (head);
		}
	head = head->next;
	i++;
	}
	return (NULL);
}
