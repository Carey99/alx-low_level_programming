#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* myConstructor - Prints before main
*/

void myConstructor(void) __attribute__((constructor));

/**
* myConstructor - Printing before main
*/

void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
