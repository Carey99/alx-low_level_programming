#include "3-calc.h"
#include <stdio.h>

/**
* op_add - sum of a and b
* @a: 1st
* @b: 2nd
* Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of a and b
* @a: 1st
* @b: 2nd
* Return: Difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiply a and b
* @a: 1st
* @b: 2nd
* Return: Product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide a and b
* @a: 1st
* @b: 2nd
* Return: Division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Remainder after division
* @a: 1st
* @b: 2nd
* Return: Remainder
*/

int op_mod(int a, int b)
{
	return (a % b);
}
