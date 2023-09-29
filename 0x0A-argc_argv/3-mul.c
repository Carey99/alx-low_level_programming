#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 1 when arguments <2
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int product = 1;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	while (i < argc)
	{
	product *= atoi(argv[i]);
	i++;
	}
	printf("%i\n", product);
	}
	return (0);
}
