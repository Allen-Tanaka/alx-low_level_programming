#include "main.h"

/**
 * rev_string - function reversing a string
 *
 * @s: string par
 *
 * Return: Rev string
 */

void rev_string(char *s)
{
	char r = s[0];
	int count = 0, i;

	while (s[count] != '\0')
	{
		count--;
		r = s[i];
		s[count] = r;
	}
}
