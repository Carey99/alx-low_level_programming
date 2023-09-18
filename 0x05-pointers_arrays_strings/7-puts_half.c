#include "main.h"
#include <stdio.h>

/**
* puts_half - puts half
* @str: Our parameter 
*/

void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while(str[i] != 0)
	{
	i++;
	}
	n = i / 2;
	for (; str[n] != '\0'; n++)
	{
	_putchar(str[n]);
	}
	if (i % 2 != 0)
	{
	_putchar(str[i - 1]);
	}
	_putchar('\n');
}
