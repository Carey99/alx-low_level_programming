#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - Add nodes to the beginning
* @head: Points to where to add
* @n: Where to be added
* Return: Address to new element else NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
