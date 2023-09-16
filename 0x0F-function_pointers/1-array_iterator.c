#include "function_pointers.h"

/**
 * array_iterator - iterates the array
 * @array: the array to be iterated
 * @size: the size of it
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
