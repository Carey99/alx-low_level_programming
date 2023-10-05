#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocate memoory
* @b: Amount to be allocated
* Exit: Terrminates if allocation fails
* Return: block of space pointed to
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
