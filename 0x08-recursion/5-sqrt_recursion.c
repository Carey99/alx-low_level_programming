#include "main.h"

/**
* _sqrt_recursion_01 - calls for _sqrt_recursion
* @num: Number to deterine its  square root
* @r: Root for num
* Return: r or recurse if not success
*/

int _sqrt_recursion_01(int num, int r)
{
	if ((r * r) > num)
	{
	return (-1);
	}
	if ((r * r) == num)
	{
	return (r);
	}
	return (_sqrt_recursion_01(num, r + 1));
}
/**
* _sqrt_recursion - natural square root of a number
* @n: Number to deterine its  square root
* Return: -1 if n doesn't have a natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_recursion_01(n, 0));
}
