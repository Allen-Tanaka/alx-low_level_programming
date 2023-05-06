#include "main.h"

/**
 * set_bit - fn that sets the value of a bit to 1 at a given index
 *
 * @n: pointer
 * @index: index
 *
 * Return: 1 (if successful) or -1 (if fails)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

