#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: the pointer to the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t rest = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		rest++;
	}

	return (rest);
}
