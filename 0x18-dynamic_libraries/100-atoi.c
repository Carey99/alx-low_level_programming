#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: String name
* Return: sign * res
*/
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	{
	sign *= -1;
	}
	if (s[i] <= '9' && s[i] >= '0')
	{
	break;
	}
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	res = res * 10 + (s[i] - '0');
	i++;
	}
	return (sign * res);
}
