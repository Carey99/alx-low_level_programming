#include "main.h"
#include <stdio.h>

/**
* print_last_digit - this function prints the last digit
* @n: our value
* Return: value of last digit
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = -last;
	}
	_putchar(last + '0');
	return (last);
}
