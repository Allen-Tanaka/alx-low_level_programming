#include "main.h"

/**
 * flip_bits - fn that returns number of bits to flip & get from a number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int cnt = 0;

	xor_result = n ^ m;
	while (xor_result)
	{
		cnt = cnt + (xor_result & 1);
		xor_result >>= 1;
	}
	return (cnt);
}
