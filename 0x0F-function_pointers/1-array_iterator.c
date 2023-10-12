#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array to input
 * @size: the size of the array
 * @action: the pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
