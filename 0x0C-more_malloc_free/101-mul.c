#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* is_digit - checks for digits
* @s: where to check
* Return: 0 or 1
*/

int is_digit(char *s)
{
	while (*s)
	{
	if (*s < '0' || *s > '9')
	{
	return (0);
	}
	s++;
	}
	return (1);
}

/**
* main - mult two numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	long int *num1;
	long int *num2;
	long int mul;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = (long int *)malloc(sizeof(long int));
	num2 = (long int *)malloc(sizeof(long int));
	if (num1 == NULL || num2 == NULL)
	{
	exit(98);
	}

	*num1 = atoll(argv[1]);
	*num2 = atoll(argv[2]);
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	exit(98);
	}
	mul = *num1 * *num2;
	printf("%ld\n", mul);
	free(num1);
	free(num2);
	return (0);
}
