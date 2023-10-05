#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _realloc - Reallocates memory
* @ptr: memory previous allocated
* @old_size: previous size
* @new_size: New size
* Return: 0 for success
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *ptr1;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	}
	ptr1 = realloc(ptr, new_size);
	if (ptr1 == NULL)
	{
	return (NULL);
	}
	return (ptr1);
}
