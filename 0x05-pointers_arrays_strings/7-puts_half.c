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
	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 0)
	{
	n = i / 2;
	}
	else
	{
	n = (i - 1) / 2;
	n += 1;
	}
	while (str[n] != '\0')
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
