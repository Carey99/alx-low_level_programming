#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assigns a random number to variable n
 * Return:Should be 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDIGIT = n % 10;

	printf("Last digit of %d is", n);
	if  (lastDIGIT > 5)
{
	printf("and is greater than 5\n");
}
	else if (lastDIGIT == 0)
{
	printf("and is 0\n");
}
	else
{
	printf("and is less than 6 and not 0\n");
}
	return (0);
}
