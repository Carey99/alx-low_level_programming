#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
* _calloc - Allocates
* @nmemb: elements
* @size: Size of each element
* Return: Pointed block
*/
void *_calloc(unsigned int nmemb, unsigned int size) {
	if (nmemb == 0 || size == 0)
	{
	return NULL;
	}

	size_t total_size;

	total_size = (size_t)nmemb * size;

	void *ptr = malloc(total_size);

	if (ptr == NULL)
	{
	return NULL;
	}
	memset(ptr, 0, total_size);
	return ptr;
}
