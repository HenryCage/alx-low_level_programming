#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer pointing to the list
 */
void free_list(list_t *head)
{
	list_t *freed;

	while (head)
	{
		freed = head->next;
		free(head->str);
		free(head);
		head = freed;
	}
}
