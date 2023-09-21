#include "main.h"

/**
* _strncat - concatenates two strings except uses nbytes
* @dest: Parameter A
* @src: Parameter B
* @n: Parameter C
* Return: dest indicating success
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;
	int ttsp;

	c = 0;
	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	ttsp = sizeof(dest) - i - 1;
	n = (n < ttsp) ? n : ttsp;
	while (src[c] != '\0' && c < n)
	{
	dest[i] = src[c];
	i++;
	c++;
	}
	return (dest);
}
