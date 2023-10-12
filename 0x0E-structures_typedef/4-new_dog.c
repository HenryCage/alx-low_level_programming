#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, j, k;

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}

	for (j = 0; name[j]; j++)
		;

	for (k = 0; owner[k]; k++)
		;

	doggy->name = malloc(j + 1);
	doggy->owner = malloc(k + 1);

	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i < j; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->age = age;

	for (i = 0; i < k; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	return (doggy);
}
