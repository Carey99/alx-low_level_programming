#include "function_pointers.h"

/**
* array_iterator - array of a ponter to fuction
* @array: array name
* @size: size of array
* @action: pointer to arr
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
	return;
	}
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
