#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns random numbers to n
 * Return:Always 0
 */
int main(void)
{
	srand(time(NULL));
	int n = rand();

	if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
	else
{
	printf("%d is negative\n", n);
}
	return (0);
}
