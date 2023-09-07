#include "main.h"
/**
 * array_range - function to pint the range of the array
 * @min: minimum value
 * @max: maximum value
 * Return: the range
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	a = malloc(sizeof(int) * j);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
