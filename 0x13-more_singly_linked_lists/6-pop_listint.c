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
	listint_t *ptr;
	int deleted_data;

	if (*head == NULL)
	{
	return (0);
	}
	ptr = *head;
	*head = ptr->next;

	deleted_data = ptr->n;
	free(ptr);
	return (deleted_data);
}
