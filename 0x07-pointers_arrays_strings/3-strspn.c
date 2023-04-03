#include "main.h"

/**
 * _strspn - function
 *
 * @s: par
 * @accept: paar
 *
 * Return: n
 */


unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*s)
	{
		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
