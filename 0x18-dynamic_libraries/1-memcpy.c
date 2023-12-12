#include "main.h"

/**
* _memcpy - copies memory area
* @dest: Where to copy to
* @src: Where to copy from
* @n: amount to be copied
* Return: Value copied to be returned
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
