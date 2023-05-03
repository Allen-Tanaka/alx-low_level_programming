#include "main.h"
#include <stdlib.h>

/**
 * array_range - fn creates array of int
 *
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i = 0, s, *p;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
