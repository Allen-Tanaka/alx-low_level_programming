#include "lists.h"

/**
 * find_listint_loop - fn that finds a loop in linked list
 *
 * @head: point
 *
 * Return: location where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *j = head;

	if (!head)
		return (NULL);

	while (i && j && (j->next))
	{
		j = (j->next->next);
		i = i->next;
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (j);
		}
	}
	return (NULL);
}
