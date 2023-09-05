#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void error_exit(int code, const char *filename, int fd);

/**
 * main - Entry point, copies one file to another.
 * @argc: Number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 (Success), 1 (failure)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fd_from == -1)
		error_exit(98, argv[1], -1);

	if (fd_to == -1)
		error_exit(99, argv[2], -1);

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, argv[2], fd_to);
	}

	if (bytes_read == -1)
		error_exit(98, argv[1], fd_from);
	if (close(fd_from) == -1)
		error_exit(100, NULL, fd_from);
	if (close(fd_to) == -1)
		error_exit(100, NULL, fd_to);
	return (0);
}

/**
 * error_exit - Exits the program with a custom error message.
 * @cd: error code.
 * @filename: name of file causing error.
 * @fd: file descriptor causing error.
 */

void error_exit(int cd, const char *filename, int fd)
{
	if (cd == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (cd == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	else if (cd == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

	exit(cd);
}
