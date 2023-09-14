#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for a digit (0 through 9)
* @c: our parameter
* Return: 1 condition is met otherwise 0
*/

int _isdigit(int c)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	for (j = 'a'; j <= 'z'; j++)
	{
	if (c == j)
	{
	return (0);
	}
	}
	return (1);
}
