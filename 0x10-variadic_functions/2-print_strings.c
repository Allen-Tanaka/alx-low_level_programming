#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  function printing strings in a new line
 *
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...:  var number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list s;
	char *str;

	va_start(s, n);

	while (i < n)
	{
		str = va_arg(s, char*);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		i++;
	}
	printf("\n");
	va_end(s);
}
