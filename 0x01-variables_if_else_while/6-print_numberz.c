#include <stdio.h>
/**
 * main - This progaramm prints all single digits
 * Return:Always 0
 */
int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; ++digits)
{
	putchar(digits + '0');
}
	putchar('\n');
	return (0);
}
