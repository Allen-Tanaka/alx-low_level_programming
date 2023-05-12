#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- fn that reads text file print to STDOUT
 *
 * @filename: text file being read
 * @letters: num of letters to be read
 *
 * Return: 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t f, w, r;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	r = read(f, s, letters);
	w = write(STDOUT_FILENO, s, r);

	free(s);
	close(f);
	return (w);
}

