#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: return 1 on succes and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, len1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	len1 = write(fd, text_content, len);

	close(fd);
	if (len1 != len)
		return (-1);

	return (1);
}

