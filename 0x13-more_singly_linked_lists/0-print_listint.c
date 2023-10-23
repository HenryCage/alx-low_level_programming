#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list
 * @h: the linked list to print out
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}
