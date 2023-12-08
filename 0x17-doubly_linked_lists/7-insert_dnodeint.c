#include "lists.h"
/**
 * addempty - Add empty node
 * @head: Pointer to first node
 * @n: Data value to be added to node
 * Return: Head
 */
dlistint_t *addempty(dlistint_t *head, int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	head = temp;

	return (head);
}
/**
 * insert_dnodeint_at_index - Insert ata given index
 * @h: Pointer iterating through list
 * @idx: Index to insert node
 * @n: Data for new node
 * Return: Address to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;

	new_node = addempty(new_node, n);
	while (i < idx && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < idx || temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp2 = temp->next;
	temp->next = new_node;
	if (temp2 != NULL)
	{
		temp2->prev = new_node;
	}

	new_node->next = temp2;
	new_node->prev = temp;

	return (new_node);
}
