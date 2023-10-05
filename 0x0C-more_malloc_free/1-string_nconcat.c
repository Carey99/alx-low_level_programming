#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - Concatenates two strings
* @s1: String 1
* @s2: String 2
* @n: Counter
* Return: Newly allocated space with s1
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, c, j, k;

	i =  c = 0;
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[c] != '\0' && c  < n)
	{
	if (n >= c)
	{
	s2 = s2;
	}
	c++;
	}
	ptr = malloc((i + c + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	for (j = 0; j < i; j++)
	{
	ptr[j] = s1[j];
	}
	for (k = 0; k < c && k < n; k++)
	{
	ptr[j + k] = s2[k];
	}
	ptr[j + k] = '\0';
	return (ptr);
}
