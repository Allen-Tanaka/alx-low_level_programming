#include "lists.h"
/**
 * insert_nodeint_at_index - fn inserting new node at a specifi position
 *
 * @head: pointer
 * @idx: index
 * @n: data input
 *
 * Return: pointer to new node or NULL
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *j = *head;
	listint_t *m;

	m = malloc(sizeof(listint_t));
	if (!m || !head)
		return  (NULL);
	m->n = n;
	m->next = NULL;

	if (idx == 0)
	{
		m->next = *head;
		*head = m;
		return (m);
	}

	while ((i < idx) && j)
	{
		if (i == (idx - 1))
		{
			m->next = j->next;
			j->next = m;
			return (m);
		}
		else
			j = j->next;
		i++;
	}
	return (NULL);
}
