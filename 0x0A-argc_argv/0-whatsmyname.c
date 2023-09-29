#include <stdlib.h>
#include <stdio.h>

/**
* main - program prints it's name
* @argc: Argument count
* @argv: Argumnt vector
* Return: 0 success
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
