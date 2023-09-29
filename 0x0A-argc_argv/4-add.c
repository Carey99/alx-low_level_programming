#include <stdlib.h>
#include <stdio.h>

/**
* main - adds only positive numbers no char
* @argc: Argument count
* @argv: Argument Vector
* Return: 1 wrong input else 0
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
	while (i < argc)
	{
	for (j =  0; argv[i][j] != '\0'; j++)
	{
	if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	i++;
	}
	printf("%i\n", sum);
	}
	return (0);
}
