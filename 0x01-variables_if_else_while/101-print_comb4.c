#include <stdio.h>
/**
* main - combination  three numbers
* both digits must be different
* Return: 0 indicate success
*/
int main(void)
{
	int index1, index2, index3;

	for (index1 = '0'; index1 < '8'; index1++)
{
	for (index2 = index1 + 1; index2 < '9'; index2++)
{
	for (index3 = index2 + 1; index3 <= '9'; index3++)
{
	putchar(index1);
	putchar(index2);
	putchar(index3);
	if (index1 == '7' && index2 == '8' && index3 == '9')
{
	putchar('\n');
}
	else
{
	putchar(',');
	putchar(' ');
}
}
}
}
	return (0);
}
