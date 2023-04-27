#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL)
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);
	for (r; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}

