#include <stdio.h>
#include "main.h"

/**
* main - largest factor
* Return: 0 indicates success
*/

int main(void)
{
	long int num;
	long int factor;

	num = 612852475143;
	while (num > 1)
	{
	if (num % factor == 0)
	{
	num /= factor;
	}
	else
	{
	factor++;
	}
	}
	printf("%ld", factor);
	return (0);
}
