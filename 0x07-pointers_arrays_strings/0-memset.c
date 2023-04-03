#include "main.h"
/**
 * _memset - function filling block of memory with a value
 *
 * @s: starting address
 * @b: desired value
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
