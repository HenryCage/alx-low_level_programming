#include "lists.h"


/**
 * list_len - gives the lengthof the list
 * @h: the pointer of the list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
