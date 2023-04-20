#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg>

/**
 * print_numbers - function printing umbers in a new line
 *
 * @separator: seperator between nunmbers
 * @n: number of integers passed
 * @...: var for numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list j;

	va_start(j, n);

	while (i < n)
	{
		printf("%d", va_arg(j, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(j);
}
