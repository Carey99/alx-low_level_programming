#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initializes valiables
* struct dog - dereference by d
* @d: Pointer to struct
* @name: Name of dog
* @age: Age of dog
* @owner: Dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
