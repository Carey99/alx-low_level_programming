#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: Name of string wher c is to be located
* @c: character to be located
* Return: First occurence of c
*/

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	p = &s[i];
	return (p);
	break;
	}
	}
	return (NULL);
}
