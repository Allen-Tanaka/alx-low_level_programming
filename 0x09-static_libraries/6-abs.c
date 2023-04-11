#include "main.h"

/**
 * _abs - function for absolute values
 * @x: check parameters
 * Return: x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
