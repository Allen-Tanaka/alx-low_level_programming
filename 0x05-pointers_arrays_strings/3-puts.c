#include "main.h"

/**
 * _puts - function printing string with a new line
 *
 * @str: string inp
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n);
}
