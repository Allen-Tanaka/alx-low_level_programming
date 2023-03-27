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
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		r = s[i];
		s[i] = s[count];
		s[count] = r;
	}
}
