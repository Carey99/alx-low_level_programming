#include <stdio.h>
/**
 * main - program that prints possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int index = 0;

	while (index <= 9)
{
	putchar(index + '0');
	if (index != 9)
{
	putchar(',');
	putchar(' ');
}
	else
{
	putchar('\n');
}
	index++;
}
	return (0);
}
