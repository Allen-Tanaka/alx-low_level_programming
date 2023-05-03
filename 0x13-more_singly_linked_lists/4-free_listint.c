#include "lists.h"

/**
 * free_listint - fn freeing a linked list
 *
 * @head: list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
