#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to be created.
 * @text_content: NULL terminated string to write
 *
 * Return: 1 (success), -1 (fail).
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t len = 0, bytes_written;

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
