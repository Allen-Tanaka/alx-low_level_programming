#include "main.h"

/**
 * rot13 - rotatiing function
 *
 * @s: pointer
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i = 0, j = 0;

	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
