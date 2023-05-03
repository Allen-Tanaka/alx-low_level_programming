#include "lists.h"

/**
 * add_nodeint_end - fn that adds a node at the end of a linked list
 *
 * @head: pointer
 * @n: data input for new element
 *
 * Return: pointer to new node, NULL(if it fails)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *i = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (i->next)
		i = i->next;
	i->next = new;

	return (new);

}
