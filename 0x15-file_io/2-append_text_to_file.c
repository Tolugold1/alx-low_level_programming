#include "main.h"

/**
 * append_text_to_file - function that appends text at the
 * end of a file.
 * @filename: The name of the file
 * @text_content: The content inside the file
 * Return: full file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, len1;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	len1 = write(fd, text_content, len);
	if (len1 == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	if (len1 != len)
		return (-1);

	return (1);
}

