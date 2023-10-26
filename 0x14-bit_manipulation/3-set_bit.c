#include "main.h"

/**
* set_bit - Sets the vaalue of  bit to 1 at indx
* @n: Points to the value to be set
* @index: Index from 0 where the value is to be set
* Return: 1 success else -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
	return (-1);
	}
	*n = *n | (1UL << index);
	return (1);
}
