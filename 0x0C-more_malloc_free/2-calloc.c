#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: this is the memory area to be filled wih bytes
 * @b: where they are copied from
 * @n: no. of times they are copied
 * Return: character s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * _calloc - allocates memory of r an array
 * @nmemb: number of elements present in the array
 * @size: the size of each element
 * Return: the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	_memset(x, 0, nmemb * size);

	return (x);
}
