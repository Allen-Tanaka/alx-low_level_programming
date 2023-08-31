#include "main.h"

/**
 * set_bit - Fn that sets value of a bit to 1 at a specific index.
 * @n: pointer
 * @index: index
 *
 * Return: 1 (if passes), -1 (error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	
	unsigned long int mask = 1UL << index;

	*n = *n | mask;
	
	return (1);
}
