#include "main.h"

/**
* flip_bits - Returns the number of bits for flipping
* @n: Given number
* @m: Where to get the amount of bits
* Return: Number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = n ^ m;
	unsigned int i = 0;

	if (sizeof(n) != sizeof(m) * 8)
	{
	return (-1);
	}
	while (result)
	{
	i += result & 1;
	result >>= 1;
	}
	return (i);
}
