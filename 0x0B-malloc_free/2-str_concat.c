#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - similiar to strcat except returns ne*p
* @s1: First string
* @s2: Second string
* Return: Pointer pointing to a new space
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int c = 0;
	int j;
	int k;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[c] != '\0')
	{
	c++;
	}
	ptr = malloc((i + c + 1) * (sizeof(char)));

	if (ptr == NULL)
	{
	return (NULL);
	}

	for (j = 0; j < i; j++)
	{
	ptr[j] = s1[j];
	}
	for (k = 0; k < c; k++)
	{
	ptr[j + k] = s2[k];
	}
	ptr[j + k] = '\0';
	return (ptr);
}
