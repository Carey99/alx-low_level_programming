#include "main.h"

/**
* _strcmp - This function compares to string
* @s1: Parameter A
* @s2: Parameter B
* Return: -ve s1 is less, +ve more, 0 equal to s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] < s2[i])
	{
	return (s1[i] - s2[i]);
	}
	else if (s1[i] > s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
	{
	return (s1[i] - s2[i]);
	}
	else if (s1[i] != '\0' && s2[i] == '\0')
	{
	return (s1[i] - s2[i]);
	}
	return (0);
}
