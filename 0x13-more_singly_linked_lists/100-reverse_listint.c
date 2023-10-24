#include "lists.h"
#include <stdio.h>

/**
* reverse_listint - Prints elements
* @head: Points through nodes listed
* Return: Pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *nodes = 0;

	ptr = *head;
	while (ptr)
	{
	if (ptr == NULL)
	nodes--;
	ptr = ptr->next;
	}
	return (nodes);
}
