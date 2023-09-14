#include "main.h"
#include <stdio.h>
/**
* _isupper - checks for uppercase characters
* @c: our parameter
* Return: 1 (c is uppercase) 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 64 && c <= 90)
	{
	return (1);
	}
	return (0);
}
