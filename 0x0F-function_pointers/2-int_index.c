#include "function_pointers.h"

/**
 * int_index - Function doing comparison
 *
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return(-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return(i);
		}
		i++;
	}
	return(-1);
}
