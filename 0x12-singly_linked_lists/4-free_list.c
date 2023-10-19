#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* free_list - Free list
* @head: Freeing from here/first node
*/

void free_list(list_t *head)
{
	if (head)
	{
	free_list(head->next);
	if (head->str)
	free(head->str);
	free(head);
	}
}
