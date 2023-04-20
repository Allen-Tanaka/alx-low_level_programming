#include "main.h"

/**
 * _pow_recursion - function raising value of x to a power of y
 *
 * @x: value
 * @y: power
 *
 * Return: solution for exp
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
