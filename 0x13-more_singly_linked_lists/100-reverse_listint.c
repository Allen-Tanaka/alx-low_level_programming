#include "lists.h"

/**
 * reverse_listint - fn reversing a linked list
 *
 * @head: pointer
 *
 * Return: pointer to the first node in new list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;
	 return (*head);
}
