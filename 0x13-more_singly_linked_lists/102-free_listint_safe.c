#include "lists.h"

/**
 * free_listint_safe - fn freeing a linked list
 *
 * @h: pointer to the first node
 *
 * Return: number of elements in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
