#include "lists.h"

/**
 * delete_nodeint_at_index - fn removing a node in a specific index
 *
 * @head: pointer
 * @index: index
 *
 * Return: 1(if successful) or -1(if fails)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = *head;
	listint_t *m = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(j);
		return (1);
	}

	while (i < (index - 1))
	{
		if (!j || !(j->next))
			return (-1);
		j = j->next;
		i++;
	}
	m = j->next;
	(j->next) = (m->next);
	free(m);

	return (1);
}
