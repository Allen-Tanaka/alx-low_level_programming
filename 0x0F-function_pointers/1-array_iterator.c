#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array elements
 *
 * @array: the array
 * @size: size of element
 * @action: pointer
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
