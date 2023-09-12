#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - now we want to print alphabets x10
* Return: is on the other .c file 0 success
*/
void print_alphabet_x10(void)
{
	int whileStarter;
	int first = 97;
	int last = 122;
	int forStarter;

	for (whileStarter = 0; whileStarter <= 9; whileStarter++)
{
	forStarter = first;
	while (forStarter <= last)
{
	putchar(forStarter);
	forStarter++;
}
	putchar('\n');
}
}
