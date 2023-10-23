#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h: pointer to the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_nodes++;
	}

	return (no_nodes);
}
