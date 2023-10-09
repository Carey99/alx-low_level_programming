#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Freee dogs
* dog_t - Struct type defined
* @p: Let's point to struct
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
