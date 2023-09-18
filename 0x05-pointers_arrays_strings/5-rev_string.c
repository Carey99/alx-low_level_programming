#include "main.h"
#include <stdio.h>

/**
* rev_string - let us print in rev
* @s: Our parameter
*/

void rev_string(char *s)
{
	int i;
	int k;
	int j;
	char temp;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	j = i - 1;
	while (k <= j)
	{
	temp = s[k];
	s[k] = s[j];
	s[j] = temp;
	j--;
	k++;
	}
}
