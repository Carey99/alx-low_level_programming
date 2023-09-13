#include "main.h"
#include <stdio.h>

/**
* _isalpha- we want to check alphabetic char
* @c: this is just the variable
* Return: 1 for true and 0 for false
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
{
	return (1);
}
	return (0);
}
