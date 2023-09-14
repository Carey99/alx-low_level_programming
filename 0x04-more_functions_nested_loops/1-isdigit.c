#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for a digit (0 through 9)
* @c: our parameter
* Return: 1 condition is met otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
