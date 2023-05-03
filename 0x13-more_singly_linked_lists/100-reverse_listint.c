#include "lists.h"

/**
 * reverse_listint - fn reversing a linked list
 *
 * @head: pointer to first node
 *
 * Return: pointer to the first node in new list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = nxt;
	}
	*head = p;
	return (*head);
}
