#include "main.h"

/**
* print_chessboard - prints chess board
* @a: Dimensional array
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
	for (j = 0; j < 8; j++)
	{
	_putchar(a[i][j]);
	j++;
	}
	_putchar('\n');
	i++;
	}
}
