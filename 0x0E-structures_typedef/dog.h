#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the new structure
 * @name: the first parameter
 * @age: the second parameter
 * @owner: the last parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
