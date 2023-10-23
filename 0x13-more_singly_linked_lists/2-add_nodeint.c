#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of the list
 * @head: the pointer pointer to the top pf the list
 * @n: the number of elements in the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_top;

	add_top = malloc(sizeof(listint_t));

	if (add_top == NULL)
		return (NULL);

	add_top->n = n;
	add_top->next = *head;
	*head = add_top;

	return (add_top);
}
