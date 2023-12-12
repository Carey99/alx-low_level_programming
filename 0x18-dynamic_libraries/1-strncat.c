#include "main.h"

/**
* _strncat - Concatenate two strings upto n bytes
* @dest: Destination
* @src: Source
* @n: amount in bytes to be concatenated
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[c] != '\0' && c < n)
	{
	dest[i] =  src[c];
	i++;
	c++;
	}
	return (dest);
}
