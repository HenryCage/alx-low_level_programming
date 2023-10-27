#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: the value of the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ui = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		ui <<= 1;

		if (b[i] == '1')
			ui += 1;
	}
	return (ui);
}
