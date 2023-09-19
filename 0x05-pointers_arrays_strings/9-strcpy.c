#include "main.h"

/**
* *_strcpy - copies strings pointed to
* @dest: Parameter 1
* @src: Parameter 2
* Return: dest success
*/

char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
	dest[c] = src[c];
	c++;
	}
	dest[c] = '\0';
	return (dest);
}
