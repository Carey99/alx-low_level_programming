#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* new_dog - Creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: Null if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameCpy;
	dog_t *ptr;
	char *ownerCpy;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
	return (NULL);
	}

	nameCpy = strdup(name);
	ownerCpy = strdup(owner);

	if (ownerCpy == NULL || nameCpy == NULL)
	{
	free(nameCpy);
	free(ownerCpy);
	free(ptr);
	return (NULL);
	}
	ptr->name = nameCpy;
	ptr->age = age;
	ptr->owner = ownerCpy;
	return (ptr);
}
