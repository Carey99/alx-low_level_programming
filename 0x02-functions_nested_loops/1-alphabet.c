#include "main.h"
#include <stdio.h>
/**
* main - Let us print
* @void: a void is a void
* print_alphabet: a to z
* Return: 0 when successful
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
/**
* print_alphabet - function prototype
* @void: a void is a void
*/
void print_alphabet(void)
{
	int first = 97;
	int last = 122;

	while (first <= last)
{
	putchar(first);
	first++;
}
	putchar('\n');
}
