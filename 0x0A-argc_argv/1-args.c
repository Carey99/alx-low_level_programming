#include <stdlib.h>
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
* main - Prints the number of arguments
* @argc: Argument count
* @argv: Argument vector
* Return: 0 success
*/

int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%i\n", argc - 1);
	return (0);
}
