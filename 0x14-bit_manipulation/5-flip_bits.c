#include "main.h"

/**
 * flip_bits - fn  that returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: num1
 * @m: num2
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int tmp, res = n ^ m;

	for (; i >= 0; i--)
	{
		tmp = res >> i;
		if (tmp & 1)
			count++;
	}
	return (count);
}

