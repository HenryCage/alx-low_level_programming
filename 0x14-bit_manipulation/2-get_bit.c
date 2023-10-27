#include "main.h"

/**
 * get_bit -  function that returns the value of a bt
 * @n: the number the bit is from
 * @index: index of the bits
 *
 * Return: the value of tbe beats
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	j = n & i;
	if (j == i)
		return (1);
	return (0);
}

