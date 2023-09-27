#include "main.h"

/**
* _pow_recursion - Power of a given int
* @x: Base number
* @y: Exponent
* Return: returns -1 if y < 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
