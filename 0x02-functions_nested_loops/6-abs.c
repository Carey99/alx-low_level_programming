#include "main.h"
#include <stdio.h>

/**
* _abs - let us compute absolute values of integer
*@n: this will be our parameter
* Return: value of n
*/

int _abs(int n)
{
	if (n < 0)
	{
	n = -n;
	}
	return (n);
}
