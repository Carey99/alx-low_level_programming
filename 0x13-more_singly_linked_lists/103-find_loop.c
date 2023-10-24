#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* find_listint_loop - Finds loop inlist
* @head: Pointer to the first node
* Return: Address to te node where loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *loop;

	if (head == NULL || head->next == NULL)
	{
	return (NULL);
	}
	ptr = head->next;
	loop = (head->next)->next;
	while (loop)
	{
	if (ptr == here)
	{
	ptr = head;
	while (ptr != loop)
	{
	ptr = ptr->next;
	loop = loop->next;
	}
	return (ptr);
	}
	ptr = ptr->next;
	loop = (loop->next)->next;
	}
	return (NULL);
}
