#include "main.h"
#include <stdio.h>
/**
* _isalpha - Checks for alphabets
* @c: Checker
* Return: 1 if true else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
|| (c <= 'Z' && c >= 'A'))
	{
	return (1);
	}
	return (0);
}
