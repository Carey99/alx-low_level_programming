#include "main.h"
#include <stdio.h>

/**
* _islower - Checks for lowercase
* @c: Checker
* Return: 1 if lower else 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
