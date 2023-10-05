#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* _calloc - Allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: A pointer to allocated block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
	return (NULL);
	}
	return (ptr);
}
