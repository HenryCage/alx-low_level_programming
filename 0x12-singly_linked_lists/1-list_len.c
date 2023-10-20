#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t wow;

	wow = 0;

	while (h != NULL)
	{
		wow++;
		h = h->next;
	}

	return (wow);
}
