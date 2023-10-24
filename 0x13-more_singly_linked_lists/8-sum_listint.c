#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* sum_listint - Sums nodes
* @head: Pointer to first node
* Return: Sum of n
*/

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *ptr = head;

	if (ptr == NULL)
	{
	return (0);
	}
	while (ptr)
	{
	total += ptr->n;
	ptr = ptr->next;
	}
	return (total);
}
