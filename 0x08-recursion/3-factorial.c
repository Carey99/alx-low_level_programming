#include "main.h"

/**
* factorial - Factorial of a given number
* @n: Numeber provided
* Return: -1 in n < 0
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	if (n == 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
