#include "lists.h"

/**
 * sum_listint - fn returning sum of data in linked list
 *
 * @head: pnt for first node
 *
 * Return: s
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *i = head;

	while (i)
	{
		s = s + (i->n);
		i = i->next;
	}
	return (s);
}
