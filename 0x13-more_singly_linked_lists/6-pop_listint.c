#include "lists.h"

/**
 * pop_listint - fn that removes the head node of linked list
 *
 * @head: pointer
 *
 * Return: data in the elements deleted or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *i;

	if (!(head && *head))
		return (0);
	num = *head->n;
	i = *head->next;
	free(*head);
	*head = i;

	return (num);
}
