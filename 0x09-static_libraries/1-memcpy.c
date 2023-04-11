#include "main.h"

/**
 * _memcpy - function copying memory data
 *
 * @dest: destinatopn
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, tmp = n;

	while (i < tmp)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
