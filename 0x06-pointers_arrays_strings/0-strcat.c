#include "main.h"

/**
 * _strcat - function that concatenates strrings
 *
 * @dest: destinatoion array
 * @src: source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0, i = 0, j = 0;

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
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);

}
