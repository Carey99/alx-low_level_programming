#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_node - Adds a new node
* @head: Temp pointer for adding
* @str: String holding characters
* Return: Null if failed/ adresss to ne char
*/

list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}
	while (str[l] != '\0')
	{
	l++;
	}
	new->len = l;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (new);
}
