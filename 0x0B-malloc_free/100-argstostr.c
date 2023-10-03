#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* argstostr - concatenates argmts
* @ac: count
* @av: arguments to be counted
* Return: Apointer to a new str
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int length = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < ac)
	{
	length += strlen(av[i]) + 1;
	i++;
	}
	ptr = (char *)malloc(length + 1);

	if (ptr == NULL)
	{
	return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
	strcpy(ptr + j, av[i]);
	j += strlen(av[i]);
	ptr[j++] = '\n';
	}
	ptr[length] = '\0';
	return (ptr);
}
