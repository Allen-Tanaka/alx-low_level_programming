#include "main.h"

/**
 * print_rev - function that prints string in reverse
 *
 * @s: string par
 *
 * Return: void
 */


void print_rev(char *s)
{
	int longi = 0, i;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;

	for (i = longi; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
