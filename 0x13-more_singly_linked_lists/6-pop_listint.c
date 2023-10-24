#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint - Deletes head nodes
* @head: Head pointer for the list
* Return: Head nodes data and 0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head, *prev;

	if (ptr != NULL)
	{
	*head = ptr->next;
	free(ptr);
	}
	while (ptr != NULL)
	{
	prev = ptr;
	ptr = ptr->next;
	}
	if (ptr == NULL)
	return (0);
	prev->next = ptr->next;
	free(ptr);
	return ((*head)->n);
}
