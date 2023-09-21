#include "main.h"

/**
* _strncpy - This function  copies a string
* @dest: Parameter A
* @src: Parameter B
* @n: Parameter C
* Return: dest for success
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[c] != '\0' && c < n - 1)
	{
	dest[c] = src[c];
	c++;
	}
	return (dest);
}
