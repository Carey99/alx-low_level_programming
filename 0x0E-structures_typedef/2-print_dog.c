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
	if (d->owner == NULL)
	{
	printf("Owner: (nil)\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
