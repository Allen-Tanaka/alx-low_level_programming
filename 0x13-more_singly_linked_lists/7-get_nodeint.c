#include "lists.h"

/**
 * get_nodeint_at_index - fn assigning an index to the node in linked list
 *
 * @head: pointer
 * @index: index
 *
 * Return: pointer to the node we looking for or NULL
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *j = head;

	while (i < index && j)
	{
		j = j->next;
		i++;
	}
	return (j ? j : NULL);
}
