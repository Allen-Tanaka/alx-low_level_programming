#include "main.h"


/**
 * reverse_array - function reversing array
 *
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
