#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: pointer to the value
 * @index: the index of the bit
 *
 * Return: the value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
