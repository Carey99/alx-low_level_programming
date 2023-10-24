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
/**
* insert_nodeint_at_index - Inserts a node in a specific plce
* @head: Points through the list
* @idx: Where node should be added
* @n: Value  on new data
* Return: Address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *index;

	index = get_nodeint_at_index(*head, idx);
	if (index == NULL)
	{
	return (NULL);
	}
	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;

	return (new);
}
