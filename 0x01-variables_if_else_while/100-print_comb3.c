#include <stdio.h>
/**
 * main - print occurence of two numbers
 * numbers shouldn't be repetitive
 * Return: success when is 0
 */
int main(void)
{
	int indexR, indexL;

	for (indexL = '0'; indexL < '9'; indexL++)
{
	for (indexR = '0'; indexR <= '9'; indexR++)
{
	if (indexL != indexR)
{
	putchar(indexL);
	putchar(indexR);
	if (indexL == '8' && indexR == '9')
{
	continue;
}
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
