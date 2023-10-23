#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_nodeint_end - Adds node at the end of the list
* @head: Points where to be added
* @n: value to be added
* Return: Address to new element else NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last_node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	last_node = *head;
	while (last_node->next)
	last_node = last_node->next;
	last_node->next = new;
	return (new);
}
