#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Allocate space & return pointer
* @str: Name of str
* Return: Pointer to new space
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i] != '\0')
	{
	i++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
	ptr[j] = str[j];
	}
	return (ptr);
}
