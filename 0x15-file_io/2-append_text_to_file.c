#include "main.h"

/**
 * append_text_to_file - Appends a text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 (success), -1 (fail).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t len = 0, bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else if (text_content == NULL)
	{
		if (fd != -1)
		{
			close(fd);
			return (1);
		}
		else
			return (-1);
	}
	close(fd);
	return (1);
}
