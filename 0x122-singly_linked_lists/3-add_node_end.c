#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_node_end - adds new node to the end
* @head: Pointer for the nodes
* @str: String holding chars
* Return: Address to the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *lastnode;

	if (str == NULL)
	{
	return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	lastnode = *head;
	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = new;
	return (new);
}
