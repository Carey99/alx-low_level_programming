#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - Prints name
* @name: What to be printed
* @f: Determines how name is printed
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
	return;
	}
	(*f)(name);
}
