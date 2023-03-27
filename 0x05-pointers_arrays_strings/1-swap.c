#include "main.h"

/**
 * swap_int - main function for swapping two integers
 *
 * @a: first int
 *
 * @b: second innt
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
