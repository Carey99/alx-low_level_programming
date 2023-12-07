#include "lists.h"
/**
 * sum_dlistint - Adds data (head->n)
 * @head: Pointer to first node
 * Return: Sum of int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int   sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
