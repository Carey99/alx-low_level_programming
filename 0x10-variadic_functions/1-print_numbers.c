#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers
* @separator: Separator of numbers
* @n: Number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int my_list;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
	}
	for (i = 0; i < n; i++)
	{
	my_list = va_arg(args, unsigned int);
	printf("%d", my_list);
	if (i < n - 1 && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
