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
	char *s;
	char *separator = "";

	va_start(args, format);
	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%s%c", separator, va_arg(args, int));
	break;
	case 'i':
	printf("%s%d", separator, va_arg(args, int));
	break;
	case 'f':
	printf("%s%f", separator, va_arg(args, double));
	break;
	case 's':
	s = va_arg(args, char *);
	if (s == NULL)
	{
	printf("(nil)");
	}
	printf("%s%s", separator, s);
	break;

	default:
	i++;
	continue;
	}
	separator = ", ";
	i++;
	}
	}
	va_end(args);
	printf("\n");
}
