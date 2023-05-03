#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fn that concatenates bytes of a string to another
 *
 * @s1: string 1
 * @s2: string 2
 * @n: num of bytes
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s0;
	unsigned int i = 0, j = 0, j1 = 0, j2 = 0;

	while (s1 && s1[j1])
		j1++;
	while (s2 && s2[j2])
		j2++;

	if (n < j2)
		s0 = malloc(sizeof(char) * (j1 + n + 1));
	else
		s0 = malloc(sizeof(char) * (j1 + j2 + 1));
	if (!s0)
		return (NULL);

	while (i < j1)
	{
		s0[i] = s1[i];
		i++;
	}

	while ((n < j2) && (i < (j1 + n)))
		s0[i++] = s2[j++];
	while ((n >= j2) && (i < (j1 + j2)))
		s0[i++] = s2[j++];

	s0[i] = '\0';

	return (s0);

}
