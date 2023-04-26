#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: integer converted
 */

int _atoi(char *s)
{
	int i = 0, j = 0, n = 0, len = 0, m = 0, d = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			n = n * 10 + d;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies 2 numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

