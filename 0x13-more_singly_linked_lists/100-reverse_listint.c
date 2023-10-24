#include "lists.h"
#include <stdio.h>

/**
* reverse_listint - Prints elements
* @head: Points through nodes listed
* Return: Pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next_node;

	prev = NULL;
	while (*head)
	{
	next_node = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next_node;
	}
	*head = prev;
	return (prev);
}
