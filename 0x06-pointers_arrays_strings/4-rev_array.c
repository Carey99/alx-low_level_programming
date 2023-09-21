#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse the content of an array to int
* @a: Parameter A
* @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int s;
	int d;
	int temp;

	s = 0;
	d = n - 1;
	while (s < d)
	{
	temp = a[s];
	a[s] = a[d];
	a[d] = temp;
	s++;
	d--;
	}
}
