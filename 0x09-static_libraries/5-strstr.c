#include "main.h"
/**
 * _strstr - function
 *
 * @haystack: par
 * @needle: par
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}

	return (0);
}

