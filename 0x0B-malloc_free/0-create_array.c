#include "main.h"

/**
 * create_array - function that creates an ar
 *	ray of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the specific character
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
