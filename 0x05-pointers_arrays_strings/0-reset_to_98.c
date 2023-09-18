#include "main.h"
#include <stdio.h>

/**
* reset_to_98 - changes the value of a pointer
* @n: Pointer declaration
*/

void reset_to_98(int *n)
{
	int i;

	*n = 98;
	n  = &i;
}
