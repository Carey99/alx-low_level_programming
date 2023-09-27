#include "main.h"

/**
* is_prime_number01 - Calls is_prime_number
* @n: Number to be determined
* @divisor: Divisor to check
* Return: 1 if number is prime else 0
*/

int is_prime_number01(int n, int divisor)
{
	if (divisor == 1)
	{
	return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	return (is_prime_number01(n, divisor - 1));
}
/**
* is_prime_number - Returns prime number if its the input
* @n: Number to be determined
* Return: 1 if number is prime else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (is_prime_number01(n, n - 1));
}
