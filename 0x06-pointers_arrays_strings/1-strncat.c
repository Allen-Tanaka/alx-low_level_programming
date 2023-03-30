#include "main.h"

/**
 * _strncat - function concatenating two strings
 *
 * @dest: first strings
 * @src: second strings
 * @n: number of strings to be concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, srclen = 0, i = 0, j = 0, s = 0;

	while (dest[i] != '\0')
	{
		destlen++;
		i++;
	}
	while (src[j] != '\0')
	{
		srclen++;
		j++;
	}
	while (s < n)
	{
		dest[destlen + s] = src[s];
		s++;
	}
	return (dest);
}
