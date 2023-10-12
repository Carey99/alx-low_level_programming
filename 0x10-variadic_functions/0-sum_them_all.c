#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - Sum of all its parameter
* @n: Number of arguents coming next
* Return: Sum of parameter
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
