#include "main.h"

/**
* _strchr - locates a character in a string
* @s: Name of string wher c is to be located
* @c: character to be located
* Return: First occurence of c
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
	if (*s == c)
	{
	return (s);
	}
	}
	return (0);
}
