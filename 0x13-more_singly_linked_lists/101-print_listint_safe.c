#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint_safe - Prints list
* @head: Points to first node
* Exit: Exit statu is 98
* Return: nodes if need be
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *ptr = head;

	if (head == NULL)
	{
	exit(98);
	}
	while (ptr != NULL)
	{
	printf("[%p] %d\n", (void *)ptr, ptr->n);
	nodes++;
	if (ptr <= ptr->next)
	{
	printf("-> [%p] %d\n", (void *)(ptr->next), ptr->next->n);
	return (nodes);
	}
	ptr = ptr->next;
	}
	return (nodes);
}
