#include "main.h"

/**
* _puts - prints the strings
* @str: This is the parameter of our string
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
