#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer pointing to the pointer of the pointer of the head
 * @str: the new one to add
 * Return: he address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *old = *head;
	unsigned int i;

	i = 0;

	while (str[i])
		i++;

	nn = malloc(sizeof(list_t));
	if (!nn)
		return (NULL);

	nn->str = strdup(str);
	nn->len = i;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}

	while (old->next)
		old = old->next;

	old->next = nn;

	return (nn);
}
