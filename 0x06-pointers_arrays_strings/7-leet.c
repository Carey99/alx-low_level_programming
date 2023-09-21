#include "main.h"

/**
* leet - encoding a string and chsnging characters
* @s: Parameter
* Return: str for success
*/

char *leet(char *x)
{
	int c;
	int k;

	char S1[] = "aAeEoOtTlL";
	char S2[] = "4433007711";
	c = 0;
	while(x[c] != '\0')
	{
	for (k = 0; k < 10; k++)
	{
	if (x[c] == S1[k])
	{
	x[c] = S2[k];
	}
	}
	c++;
	}
	return (x);
}
