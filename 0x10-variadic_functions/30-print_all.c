#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* print_all - Prints everything
* @format: Number of arguments
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	int printed = 0;
	va_list num_args;

	va_start(num_args, format);

	while (format[i])
	{
	if (format[i] == 'c' ||
format[i] == 'i' || format[i] == 'f' || format[i] == 's')
	{
	if (printed)
	printf(", ");
	else
	printed = 1;
	}
	if (format[i] == 'c')
	{
	printf("%c", va_arg(num_args, int));
	}
	else if (format[i] == 'i')
	{
	printf("%d", va_arg(num_args, int));
	}
	else if (format[i] == 'f')
	{
	printf("%f", va_arg(num_args, double));
	}
	else if (format[i] == 's')
	{
	char *str = va_arg(num_args, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	}
	i++;
	}
	printf("\n");
	va_end(num_args);
}
