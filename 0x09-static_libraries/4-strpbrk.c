#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string where bytes is being searched
* @accept: Number of bytes accepted
* Return: pointer to the bytes in s
*/

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
	temp = accept;
	while (*temp != '\0')
	{
	if (*s == *temp)
	{
	return (s);
	}
	temp++;
	}
	s++;
	}
	return (0);
}
