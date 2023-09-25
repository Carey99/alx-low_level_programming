#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: String to determine length
* @accept: length to be accepted fro string
* Return: number of bytes in te initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int x = 0;

	while (s[x] != '\0')
	{
	for (j = 0; accept[j]; j++)
	{
	if (s[x] == accept[j])
	{
	i++;
	break;
	}
	else if (accept[j + 1] == '\0')
	{
	return (i);
	}
	}
	x++;
	}
	return (i);
}
