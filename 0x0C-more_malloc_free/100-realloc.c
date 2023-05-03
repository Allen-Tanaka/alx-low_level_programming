#include "main.h"
#include <stdlib.h>

/**
 * _realloc - fn reallocating a memory
 *
 * @ptr: pointer to prev memory
 * @old_size: size of alloc memory
 * @new_size: new size of new memory block
 *
 * Return: pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p0;
	unsigned int i = 0, j = 0;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);
	p0 = ptr;

	if (new_size < old_size)
	{
		while (i < old_size)
		{
			p[i] = p0[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (j < old_size)
		{
			p[j] = p0[i];
			j++;
		}
	}
	free(ptr);
	return (p);
}
