#include "main.h"

/**
 * print_numbers - main function to print numbers
 *
 * Return: none
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
