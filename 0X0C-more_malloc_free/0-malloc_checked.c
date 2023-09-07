#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: returns it here
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
