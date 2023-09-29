#include "main.h"

/**
* _strncpy - Copies string
* @dest: Destination
* @src: Source
* @n: Size to be copied
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] !=  '\0' && i < n)
	{
	dest[i] =  src[i];
	i++;
	}
	while(i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
