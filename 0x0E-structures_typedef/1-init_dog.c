#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function initializing a variable type of struct dog
 * @d: pointer to the initialized struct dog
 * @name: initialized name
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
