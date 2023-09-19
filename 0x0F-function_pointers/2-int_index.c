#include "function_pointers.h"
/**
 * int_index - main block of code
 * @array: the array
 * @size: the size of the array
 * @cmp: the pointer
 * Return: a value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}