#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointer
 * @name: string adding
 * @f: pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == Null || f == Null)
		return (0);
	f(name);
}
