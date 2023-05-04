#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - fn returning the sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - fn returning the difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: Difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fn returning the product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fn returning the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: Quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - fn returning the remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: Remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

