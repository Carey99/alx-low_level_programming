#include <stdio.h>
/**
 * main - Alphabetical name prints A to Z
 * Return: Always 0
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	char letters;

	for (letters = start; letters <= end; ++letters)
{
	putchar(letters);
	putchar('\n');
}
	return (0);
}
