#include "lists.h"

/**
 * print_listint - function printing elements of linked list
 *
 * @h: linked list to be printed
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
