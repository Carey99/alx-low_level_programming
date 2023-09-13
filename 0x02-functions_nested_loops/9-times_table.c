#include "main.h"
#include <stdio.h>

/**
 * times_table - multiplication table of nine
 */
void times_table(void)
{
	int rows = 9;
	int columns = 9;
	int product;
	int i;
	int j;

	for (i = 0; i <= rows; i++)
	{
	for (j = 0; j <= columns; j++)
	{
	product = i * j;
	if (j == 0)
	{
	_putchar('0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	if (product < 10)
	{
	_putchar(' ');
	}
	else
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
