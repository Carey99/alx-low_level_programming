#include "main.h"

/**
* _puts - Prints a string
* @s: Name of string
*/

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
