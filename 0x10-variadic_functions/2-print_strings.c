#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* print_strings - Prints strings
* @separator: String Separator
* @n: Number of strings to be passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_arg;

	va_start(num_arg, n);
	if (separator == NULL)
	{
	return;
	}
	for (i = 0; i < n; i++)
	{
	char *str = va_arg(num_arg, char *);

	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(num_arg);
	printf("\n");
}
