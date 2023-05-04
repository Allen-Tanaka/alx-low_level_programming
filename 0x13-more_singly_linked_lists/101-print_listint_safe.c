#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - fn that counts the number of unique nodes
 *
 * @head: pointer to the head of the listint_t to check
 *
 * Return: If the function fails, exit the program with status 98
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *m, *n;
	size_t j = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	m = head->next;
	n = (head->next)->next;
	while (n)
	{
		if (m == n)
		{
			m = head;
			while (m != n)
			{
				j++;
				m = m->next;
				n = n->next;
			}
			m = m->next;
			while (m != n)
			{
				j++;
				m = m->next;
			}
			return (j);
		}
		m = m->next;
		n = (n->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - fn printing a listint_t list safely.
 * @head: pointer to the head
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j = looped_listint_len(head), i = 0;

	if (j == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			j++;
		}
	}
	else
	{
		while (i < j)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (j);
}

