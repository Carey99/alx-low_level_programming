#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the number of arguments
* @argc: Argument count
* Return: 0 succes
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
