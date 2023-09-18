#include "main.h"

/**
* _strlen - counts the length of a string
* @s: our parameter
* Return: length of our string
*/

int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
	c++;
	}
	return (c);
}
