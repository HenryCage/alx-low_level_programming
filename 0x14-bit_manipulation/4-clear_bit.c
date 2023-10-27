#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: pointeer pointing to the bits
 * @index: the index starting fro 0
 *
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
