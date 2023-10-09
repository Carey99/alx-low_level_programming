#ifndef MAIN_H
#define MAIN_H
/**
* struct dog - poppy
* @name: poppy name
* @age: poppy age
* @owner: Poppy owner
*/
typedef struct dog
	{
	char *name;
	float age;
	char *owner;
	} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
