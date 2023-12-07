#include "lists.h"
/**
 * add_dnodeint_end - Adds node to the end of list
 * @head: Iterates through the entire list
 * @n: Data to be added to new node
 * Return: Address to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *prev_node = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL, new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (prev_node->next)
	{
		prev_node = prev_node->next;
	}
	new_node->prev = prev_node;
	new_node->next = NULL;
	prev_node->next = new_node;

	return (new_node);
}
