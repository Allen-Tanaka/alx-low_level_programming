#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - fn that determines if any number is zero
 *
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, j = 1, k = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			j = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			k = 0;
			break;
		}
	if (j == 1 || k == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - fn that set memery to zero in a new array
 *
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - fn that determines length of the number and checks if number is in base 10
 *
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */

int _checknum(char *argv[], int n)
{
	int len;

	for (len = 0; argv[n][len]; len++)
		if (!isdigit(argv[n][len]))
		{
			printf("Error\n");
			exit(98);
		}
	return (len);
}

/**
 * main - fn that multiplies two positive numbers
 *
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, l, s, sum = 0, i, j, k, m = 0;
	char *n;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), l = ln1 + ln2, n = malloc(l + 1);
	if (n == NULL)
		printf("Error\n"), exit(98);
	n = _initialize_array(n, l);
	k = l - 1, i = ln1 - 1, j = ln2 - 1;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (sum > 0)
			{
				s = (n[k] - '0') + sum;
				if (s > 9)
					n[k - 1] = (s / 10) + '0';
				n[k] = (s % 10) + '0';
			}
			i = ln1 - 1, j--, sum = 0, m++, k = l - (1 + m);
		}
		if (j < 0)
		{
			if (n[0] != '0')
				break;
			l--;
			free(n), n = malloc(l + 1), n = _initialize_array(n, l);
			k = l - 1, i = ln1 - 1, j = ln2 - 1, m = sum = 0;
		}
		if (j >= 0)
		{
			s = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (n[k] - '0') + sum;
			sum = s / 10, n[k] = (s % 10) + '0';
		}
	}
	printf("%s\n", n);
	return (0);
}

