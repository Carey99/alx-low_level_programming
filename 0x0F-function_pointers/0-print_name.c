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
}

/**
* prints_name - Func calls
* @name: String to b
*/

void prints_name(char *name)
{
	int i = 0;

	while (name[i] != '\0')
	{
	putchar(name[i]);
	i++;
	}
	putchar('\n');
}
