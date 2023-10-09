#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
* print_dog - Prints the struct
* struct dog - Name of struct
* @d: Pointer to struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	if (d->name == NULL)
	{
	printf("Name: (nil)\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
