#include "main.h"

/**
 * _strncpy - Copy string
 *
 * @dest: destination
 * @src: source
 * @n: number of strings
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	 int i = 0;

	 while (i < n)
		 dest[i] = src[i];
	 return (dest);
}
