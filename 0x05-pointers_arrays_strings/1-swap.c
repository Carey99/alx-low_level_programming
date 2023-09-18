#include "main.h"
#include <stdio.h>

/**
* swap_int - swapping values
* @a: First parameter
* @b: Second parameter
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
