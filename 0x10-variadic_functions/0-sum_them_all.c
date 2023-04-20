#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all parameters
 *
 * @n: number of parameters
 * @...: var to calc sum
 *
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
