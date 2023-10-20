#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: the top pf the list
 * @str: the new to be added
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	unsigned int i;

	i = 0;

	while (str[i])
		i++;

	nn = malloc(sizeof(list_t));
	if (!nn)
		return (NULL);

	nn->str = strdup(str);
	nn->len = i;
	nn->next = (*head);
	(*head) = nn;

	return (*head);
}
