#include "main.h"

/**
* _strcmp - This function compares to string
* @s1: Parameter A
* @s2: Parameter B
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int x;
	int result;

	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[x] != '\0')
	{
	x++;
	}
	if (result ==  0)
	{
	s1 == s2;
	}
	else if (result < 0)
	{
	s1 < s2;
	}
	else
	{
	s1 > s2;
	}
}
