#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: putting it to here
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
