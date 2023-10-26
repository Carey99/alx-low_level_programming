#include "main.h"

/**
* get_endianness - Check bytes order
* Return: 0 if big else 1
*/

int get_endianness(void)
{
	int j = 1;
	char *byte = (char *)&j;

	return ((byte[0] == 1) ? 1 : 0);
}
