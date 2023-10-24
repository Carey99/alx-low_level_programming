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
	int deleted_data;

	if (*head == NULL)
	{
	return (0);
	}
	while (ptr->next != NULL)
	{
	prev = ptr;
	ptr = ptr->next;
	}
	deleted_data = ptr->n;
	if (prev != NULL)
	prev->next = NULL;
	*head = NULL;

	free(ptr);
	return (deleted_data);
}
