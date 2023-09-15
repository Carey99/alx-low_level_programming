#include "main.h"
#include <stdio.h>

/**
* print_triangle - triangle printing
* @size: This is our parameter
*/

void print_triangle(int size)
{
	int i;
	int t;
	int j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size - i; j++)
	{
	_putchar(' ');
	}
	for (t = 1; t <= i; t++)
	{
	_putchar(35);
	}
	_putchar('\n');
}
}
}
