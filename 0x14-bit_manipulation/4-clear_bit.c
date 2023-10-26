#include "main.h"

/**
* clear_bit - Sets value of bit to 0 at index
* @n: Provided number
* @index: Index to be set to 0
* Return: 1 success else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
	return (-1);
	}
	*n = *n & ~(1UL << index);
	return (1);
}
