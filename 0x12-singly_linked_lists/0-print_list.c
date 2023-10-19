#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - Prints all elements in a list
* @h: Pointer to struct
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		printf("[%u]%s\n", h->len, h->str);
	h = h->next;
	length++;
	}
	return (length);
}