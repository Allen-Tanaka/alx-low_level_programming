#include "main.h"

/**
 * cap_string - Capitalising words all lowercase
 *
 * @a: string to be capitalized
 *
 * Return: a
 */

char *cap_string(char *a)
{
	int i = 0;
	int s = a[i - 1];

	while (a[i])
	{
		while (!((a[i] >= 'a') && (a[i] <= 'z')))
			i++;
		
		if (s == ' ' || s == '\t' || s == '\n' || s == ',' || s == ';' ||
			s == '.' || s == '!' || s == '?' || s == '"' ||
			s == '(' || s == ')' || s == '{' || s == '}' || i == 0)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);

}
