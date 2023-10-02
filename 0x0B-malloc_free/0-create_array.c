#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - crates an array string
* @size: Size of the string
* @c: Charcter to be initialized in the string
* Return: NULL if size is 0/ pointer to arr else NULL
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	str[i] =  c;
	}
	return (str);
}
