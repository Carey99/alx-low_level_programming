#include "main.h"
#include <stdio.h>

/**
* print_alphabet - function prototype
* @void: a void is a void
*/
void print_alphabet(void)
{
	int first = 97;
	int last = 122;

	while (first <= last)
{
	putchar(first);
	first++;
}
	putchar('\n');
}
