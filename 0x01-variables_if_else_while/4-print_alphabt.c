#include <stdio.h>
/**
 * main - printing all letters except q and e
 * Return:Always 0
 */
int main(void)
{
	int start = 'a';
	int end = 'z';
	int letters;

	for (letters = start; letters <= end; ++letters)
{
	if (letters != 'q' && letters != 'e')
{
	putchar(letters);
}
}
	putchar('\n');
	return (0);
}
