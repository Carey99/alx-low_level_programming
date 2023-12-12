#include "main.h"

/**
* _strlen - Determines length of string
* @s: name of string
* Return: Length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
