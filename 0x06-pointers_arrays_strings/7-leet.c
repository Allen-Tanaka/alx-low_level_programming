#include "main.h"

/**
 * leet - function converting to leet language
 *
 * @s: par
 *
 * Return: s
 */

char *leet(char *s)
{
	int i = 0;
	char a1[] = "aAeEoOtTlL", a2[] = "4433007711";

	while ((s[i] != '\0') && (i < 10))
	{
		if (s[i] == a1[i])
			s[i] = a2[i];
		i++;
	}
	return (s);
}
