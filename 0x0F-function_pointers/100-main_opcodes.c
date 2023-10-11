#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints opcodes
* @argc: Argument count
* @argv: Argument vector
* Exit: Termination status
* Return: 0 for success
*/

int main(int argc, char *argv[])
{	int i, number_of_bytes;
	char *s;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	s = (char *)main;

	i = 0;
	while (i < number_of_bytes)
	{
	if (i == number_of_bytes - 1)
	{
	printf("%02hhx\n", s[i]);
	}
	else
	{
	printf("%02hhx ", s[i]);
	}
	i++;
	}
	return (0);
}
