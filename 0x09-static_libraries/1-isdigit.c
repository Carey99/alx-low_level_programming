#include "main.h"
#include <stdio.h>

/**
* _isdigit - Checks for digits
* @c: Checker
* Return: 1 true else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
