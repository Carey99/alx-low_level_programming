#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* string_toupper - prints lowercase to uppercase
* Return: str success
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] -  32;
	}
	}
	return (str);
}
