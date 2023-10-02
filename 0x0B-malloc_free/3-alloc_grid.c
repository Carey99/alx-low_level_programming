#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - Returns a pointer to a 2D array
* @width: row of the array
* @height: Column of the array
* Return: Pointer to a 2D
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i, k;


	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	a[i] = (int *)malloc(width * sizeof(int));
	if (a[i] == NULL)
	{
	for (k = 0; k < i; k++)
	{
	free(a[k]);
	}
	free(a);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (k = 0; k < width; k++)
	{
	a[i][k] = 0;
	}
	}
	return (a);
}
