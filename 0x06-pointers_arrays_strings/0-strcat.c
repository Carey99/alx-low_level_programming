#include "main.h"
#include <stdio.h>

/**
* _strcat - this function concatenates two strings
* @dest: Parameter A
* @src: Pameter B
* Return: est for success
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	i = 0;
	c = 0;
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
