#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_bit - Returns the value of bits
* @n: Given number
* @index: Index from 0 of bit to get
* Return: Value of bit at index or -1 for error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int iat = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	return ((n & iat) ? 1 : 0);
}
