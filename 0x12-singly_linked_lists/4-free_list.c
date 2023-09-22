#include "lists.h"

/**
 * free_list - function to free the list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
