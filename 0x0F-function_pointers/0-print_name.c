#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_name - Prints name
* @name: Parmeter to be printed
* @f: Determines how name is printed
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);

	while (*name != '\0')
	{
	putchar(*name);
	name++;
	}
}
