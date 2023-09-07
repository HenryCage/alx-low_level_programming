#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function to create an array
 * @size: first parameter
 * @c: second one
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(char) * size);

	if (j == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		j[i] = c;
	return (j);
}
