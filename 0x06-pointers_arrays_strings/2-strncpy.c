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

	for (i = 0; i < n; i++)
	{
	if (src[i] == '\0')
	{
	dest[i] = src[i];
	}
	else
	{
	dest[i] = '*';
	}
	}
	for (; i < n; i++)
	{
	dest[i] = '*';
	}
	dest[i] = '\0';
	return (dest);
}
