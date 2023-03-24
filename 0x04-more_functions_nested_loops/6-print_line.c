#include "main.h"

/**
 * print_line - function printing
 *
 * @n: number of times
 *
 * Return: none
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
