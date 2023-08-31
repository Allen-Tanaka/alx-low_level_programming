#include "main.h"

/**
 * get_endianness - fn for checking the endianness of the machine.
 *
 * Return: 0 (big endian), 1 (little endian).
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &x;

	return (*c);
}
