#include <stdio.h>
/**
 * main - a while loop decrement
 * Return:Always 0
 */
int main(void)
{
	char Last = 'z';

	while (Last >= 'a')
{
	putchar(Last);
	Last--;
}
	putchar('\n');
	return (0);
}
