#include "main.h"

/**
 * _calloc - functio to allocate memory for an array
 * @nmemb: the array of elements
 * @size: the number of bytes
 * Return: NULL if 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}
