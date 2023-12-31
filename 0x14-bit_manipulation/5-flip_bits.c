#include "main.h"

/**
* flip_bits - Returns the number of bits for flipping
* @n: Given number
* @m: Where to get the amount of bits
* Return: Number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	unsigned int i = 0;

	result = n ^ m;
	while (result)
	{
	if ((result & 1) == 1)
	i++;
	result = result >> 1;
	}
	return (i);
}
