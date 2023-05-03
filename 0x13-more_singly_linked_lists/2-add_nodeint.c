#include "lists.h"

/**
 * add_nodeint - fn adding new node of linked list
 *
 * @head: pointer
 * @n: data to put in new node
 *
 * Return: pointer to new node or NULL (if fails)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
