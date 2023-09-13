#include "main.h"
#include <stdio.h>

/**
* print_sign - a function that prints sign of a number
* @n: this is our parameter
* Return: 1(-) n > zero, 0(0) n = zero, else -1
*/

int print_sign(int n)
{
	if (n > '0')
{
	_putchar(43);
	return (1);
}
	else if (n < '0')
{
	_putchar(45);
	return (-1);
}
	else
{
	_putchar(48);
	return (0);
}
}
