#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Sarch using jump search
 * @array: pointer to the first element
 * @size: Number of elements in the array
 * @value: Data to search
 *
 * Return: Return value if found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (array == NULL)
		return (-1);
	start = 0;
	end = sqrt(size);
	while (array[end] < value && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start = end;
		end =  end + sqrt(size);
		if (end > size - 1)
			end = size;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
