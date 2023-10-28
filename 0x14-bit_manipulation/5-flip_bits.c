#include "main.h"

/**
 * flip_bits -  function that returns the number of bits needed to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}

	return (i);
}
