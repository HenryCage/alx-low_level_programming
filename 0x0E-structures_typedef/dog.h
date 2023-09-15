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

typedef struct dog dog_t;

#endif
