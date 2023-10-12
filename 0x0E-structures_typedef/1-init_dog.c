#include "dog.h"

/**
 * init_dog - function to initialize variable
 * @d: pointer to the struct dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
