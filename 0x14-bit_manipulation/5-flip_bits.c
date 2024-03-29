#include "main.h"

/**
 * flip_bits - fn that returns number of bits to flip.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int cnt = 0;

	while (xor_result)
	{
		cnt = cnt + (xor_result & 1);
		xor_result >>= 1;
	}
	return (cnt);
}
