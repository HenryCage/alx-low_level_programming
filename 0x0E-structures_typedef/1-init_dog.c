#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - contains the code
 * @d: pointer where the struct is
 * @name: first parameter
 * @age: second one
 * @owner: las one
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
