#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers to 98
* @n: our parameter
*/

void print_to_98(int n)
{
	int index;

	if (n < 98)
	{
	for (index = n; index < 98; index++)
	{
	if (n != 98)
	{
	printf("%d", index);
	printf(", ");
	}
	}
	}
	else
	{
	for (index = n; index > 98; index--)
	{
	if (n != 98)
	{
	printf("%d", index);
	printf(", ");
	}
	}
	}
	printf("98");
	printf("\n");
}
