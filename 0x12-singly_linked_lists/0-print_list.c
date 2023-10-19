#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - Prints all elements in a list
* @h: List holding nodes
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	int length = 0;

	while (h)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d]%s\n", h->len, h->str);
		}
	length++;
	h = h->next;
	}
	return (length);
}
