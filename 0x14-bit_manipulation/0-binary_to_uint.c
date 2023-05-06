#include "main.h"

/**
 * binary_to_uint - fn converting binary to unsigned int
 *
 * @b: binary num in string
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
		i++;
	}
	return (j);
}

