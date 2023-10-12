#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints everything
* @format: A format string that specifies the types of arguments
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int printed = 0;

	va_start(args, format);
	while (format[i])
	{
	if (format[i] == 'c')
	{
	printf("%s%c", printed ? ", " : "", va_arg(args, int));
	printed = 1;
	}
	else if (format[i] == 'i')
	{
	printf("%s%d", printed ? ", " : "", va_arg(args, int));
	printed = 1;
	}
	else if (format[i] == 'f')
	{
	printf("%s%f", printed ? ", " : "", va_arg(args, double));
	printed = 1;
	}
	else if (format[i] == 's')
	{
	char *str = va_arg(args, char *);

	printf("%s%s", printed ? ", " : "", (str != NULL) ? str : "(nil)");
	printed = 1;
	}
	i++;
	}
	va_end(args);
	printf("\n");
}
