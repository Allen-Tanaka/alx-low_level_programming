#include "main.h"

/**
 * _islower - prints lowercase
 *
 * @c: printed result
 * Return: 1 for lowercase  and 0 if not
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
