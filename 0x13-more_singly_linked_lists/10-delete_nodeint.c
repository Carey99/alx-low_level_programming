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
* delete_nodeint_at_index - Deletes a node at index
* @head: Points though list
* @index: Index to be deleted
* Return: 1 for succes else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *node2delete, *temp;

	if (*head == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	return  (1);
	prev = get_nodeint_at_index(*head, index - 1);
	if (prev == NULL || prev->next == NULL)
	{
	return (-1);
	}
	node2delete = prev->next;
	prev->next = node2delete->next;
	free(node2delete);
	return (1);
}
