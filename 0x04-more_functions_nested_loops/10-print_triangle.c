#include "main.h"

/**
 * print_triangle - function printing a triangle
 *
 * @size: size of triangle
 *
 * Return: none
 */


void print_triangle(int size)
{
	int i;
	int j;
	int m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (m = size - i; m >= 1; m--)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
