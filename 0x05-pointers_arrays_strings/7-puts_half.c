#include "main.h"

/**
 * puts_half - function printing half a string
 * @str: string par
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, s, longi = 0;

	for (i = 0; str[i] != '\0'; i++)
		longi++;

	s = longi / 2;

	if (longi % 2 == 1)
		s = (longi + 1) / 2;

	for (i = s; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
