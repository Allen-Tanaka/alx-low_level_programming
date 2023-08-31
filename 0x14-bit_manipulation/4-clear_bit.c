#include "main.h"

/**
 * clear_bit - fn that clears the value of a bit to 0 at a specified index.
 * @n: pointer
 * @index: index
 *
 * Return: 1 (if it works), -1 (error).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
