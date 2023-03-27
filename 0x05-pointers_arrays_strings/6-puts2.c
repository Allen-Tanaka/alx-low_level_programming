#include "main.h"

/**
 * puts2 - function prints 1 of 2 characters
 *
 * @str: par
 *
 * Return: void
 */

void puts2(char *str)
{
	int longi = 0;
	int i = 0, j;
	char *c = str;

	while (*c != '\0')
	{
		c++;
		longi++
	}
	i = longi - 1;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_puthar(str[0]);
		}
	}
	_putchar('\n');
}
