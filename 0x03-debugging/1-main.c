#include <stdio.h>

/**
* main - iterate to exite the loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(");

	i = 0;

	while (i++ < 10)
	{
	putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
