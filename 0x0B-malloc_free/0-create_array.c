#include "main.h"
#include <stdlib.h>

/**
 * create_array - fucntion creating an array of certain size and allocates char *C
 *
 * @size: size of array
 * @c: char
 *
 * Return: s or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) *size);

	if (size == 0 || s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
