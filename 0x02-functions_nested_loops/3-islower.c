#include "main.h"
#include <stdio.h>

/**
* _islower - checks for lowercase characters
* @c: This is the value of _islower
* Return: 1 for success otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
{
	return (1);
}
	return (0);
}
