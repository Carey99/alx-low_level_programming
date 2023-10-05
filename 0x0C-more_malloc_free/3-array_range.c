#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* array_range - Creates an array of int
* @min: Minimum size
* @max: Maximum size
* Return: a pointer to the new blck
*/

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
	{
	return (NULL);
	}
	size =  max - min + 1;

	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	ptr[i] = min + i;
	}
	return (ptr);
}
