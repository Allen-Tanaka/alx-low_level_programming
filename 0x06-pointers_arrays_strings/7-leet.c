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
	int i = 0, j;
	char a1[] = "aAeEoOtTlL", a2[] = "4433007711";

	while ((s[i] != '\0'))
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[j])
			s[i] = a2[j];
		}
		i++;
	}
	return (s);
}
