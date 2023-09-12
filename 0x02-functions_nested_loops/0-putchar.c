#include <stdio.h>

/**
* main - prints putchar
* Return: should be 0 to indicate success
*/
int main(void)
{
	char *Putme = "_putchar";
	int i;

	for (i = 0; Putme[i] != '\0'; i++)
{
	putchar(Putme[i]);
	putchar('\n');
}
	return (0);
}
