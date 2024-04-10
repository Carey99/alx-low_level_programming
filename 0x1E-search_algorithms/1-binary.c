#include "search_algos.h"

/**
 * binary_search - Binary search for data collection
 * @array: Pointer to first element
 * @size: Size of array
 * @value: Value to search
 *
 * Return: value when found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for  (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}