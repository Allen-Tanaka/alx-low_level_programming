#include "main.h"
#include <stdlib.h>


/**
 * *_memset - fn filling memory with a constant byte
 *
 * @s: memory area
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}



/**
 * _calloc - fn that allocates memory for an array
 *
 * @nmemb: number of elements in array
 * @size: size of element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
