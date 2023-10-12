#include "main.h"

/**
 * _realloc - function to reallocate a memory block
 * @ptr: pointer to the previous memory
 * @old_size: size of the allocated space
 * @new_size: size of the new memory block
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
