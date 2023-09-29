#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest : Destination
* @src: Source
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int  i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[c] != '\0')
	{
	dest[i] = src[c];
	i++;
	c++;
	}
	dest[i] = '\0';
	return (dest);
}
