#include "main.h"

/**
 * ssize_t read_textfile - Write a function that reads
 * a text file and prints it to the POSIX standard output.
 * @filename: the name of the text file
 * @letters: the size of the string.
 * Return: returns the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len, len1;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(buf) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	len = read(fd, buf, letters);
	if (len == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[len] = '\0';

	close(fd);

	len1 = write(STDOUT_FILENO, buf, len);
	free(buf);
	if (len1 != len)
		return (0);

	return (len);
}
