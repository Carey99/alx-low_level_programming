#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assigns a random number to variable n
 * Return:Should be 0
 */
int main(void)
{
	int n, lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNumber = n % 10;

	if  (lastNumber > 5)
{
	printf("Last digit of %d is %i and is greater than 5\n", n, lastNumber);
}
	else if (lastNumber == 0)
{
	printf("Last digit of %d is %i and is 0\n", n, lastNumber);
}
	else if (lastNumber < 6 && lastNumber != 0)
{
	printf("Last digit of %d is %i and is less than 6 and not 0\n",
	n, lastNumber);
}
	return (0);
}
