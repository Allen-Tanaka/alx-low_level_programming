#include "main.h"

/**
 * _strcpy - funstion copying string
 *
 * @dest: destination
 * @src: source
 *
 * Return: to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
