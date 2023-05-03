#include "lists.h"

/**
 * print_listint - function printing elements of linked list
 *
 * @h: linked list to be printed
 *
 * Return: nm of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}
	return (nm);
}
