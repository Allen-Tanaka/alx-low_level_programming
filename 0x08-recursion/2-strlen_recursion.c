#include "main.h"

/**
 * _strlen_recursion - function giving length of a string
 *
 * @s: string
 *
 * Return: i
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*S)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
