#include "lists.h"

/**
 * free_listint2 - fn freeing a linked list
 *
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
	*head = NULL;
}
