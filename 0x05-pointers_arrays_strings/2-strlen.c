#include "main"

/**
 * _strlen - function checking string length
 *
 * @s: string
 *
 * Return: longi
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
