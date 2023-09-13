#include "main.h"
#include <stdio.h>
/**
* times_table - multiplication table of nine
*/

void times_table(void)
{
	int rows = 9;
	int column = 9;
	int product;
	int i;
	int j;

	for (i = 0; i <= rows; i++)
	{
	for (j = 0; j <= column; j++)
	{
	product = i * j;
	if (product < 10)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar(product + '0');
	}
	else
	{
	_putchar(' ');
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
