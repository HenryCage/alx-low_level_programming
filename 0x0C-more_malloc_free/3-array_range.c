#include "main.h"

/**
 * array_range - function to create an array of integers
 * @min: the minimum value of nummbers
 * @max: the maximum value of numbers
 * Return: pointer to a new array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
