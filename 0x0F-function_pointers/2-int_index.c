#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - Searches for an int
* @array: Array to be searched
* @size: Number of elements
* @cmp: Pointer to the function to be used to compare values
* Return: -1 for no success else i
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
	return (-1);
	}
	if (size <= 0)
	{
	return (-1);
	}

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	}
	return (-1);
}
