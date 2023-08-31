#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number or 0 if (one or more chars
 * in the string b that is not 0 or 1 b is NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int f = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
	{
		if (b[i] == '1')
			f = f + base;
		else if (b[i] != '0')
			return (0);
		base = base * 2;
	}
	return (f);
}
