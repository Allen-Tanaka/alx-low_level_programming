#include "main.h"

/**
 * print_binary - fn prints binary represenation of a decimal num
 *
 * @n: num to be printed
 */

void print_binary(unsigned long int n)
{
	int i = 63, count = 0;
	unsigned long int tmp;

	for (; i >= 0; i--)
	{
		tmp = n >> i;

		if (tmp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
