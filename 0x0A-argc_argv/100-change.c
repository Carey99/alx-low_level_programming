#include <stdlib.h>
#include <stdio.h>

/**
* main - minium number of coins is displayed
* @argc: Argument count
* @argv: Argument vector
* Return: 0 success else 1 for any error
*/

int main(int argc, char *argv[])
{
	int j;
	int cent;
	int coinC[5] = {0};
	int coinV[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	cent =  atoi(argv[1]);
	if (cent < 0)
	{
	printf("0\n");
	}
	else
	{
	for (j = 0; j < 5; j++)
	{
	coinC[j] = cent / coinV[j];
	cent -= coinC[j] * coinV[j];
	change += coinC[j];
	}
	printf("%i\n", change);
	}
	return (0);
}
