#include "main.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: arguments.
 * Return: result
 */

int main(int argc, char *argv[])
{
	int fd, fd1, c_error;
	char *buf, *errmsg1, *errmsg2, *errmsg3, *errmsg4;
	ssize_t len1;

	errmsg1 = "Usage: cp file_from file_to";
	errmsg2 = "Error: Can't write to";
	errmsg3 = "Error: Can't read from file";
	errmsg4 = "Error: Can't close fd";
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", errmsg1);
		exit(97);
	}
	fd = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", errmsg2, argv[2]);
		exit(99);
	}

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "%s %s\n", errmsg3, argv[1]);
		exit(98);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", errmsg3, argv[1]);
		exit(98);
	}

	buf = malloc(sizeof(buf) * 1024);
	if (buf == NULL)
	{
		close(fd1);
		return (-1);
	}

	while ((len1 = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd, buf, len1) != len1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", errmsg2, argv[2]);
			exit(99);
		}
	}
	if (len1 == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", errmsg3, argv[1]);
		exit(98);
	}
	c_error = close(fd1);
	if (c_error == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", errmsg4, fd1);
		exit(100);
	}
	c_error = close(fd);
	if (c_error == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", errmsg4, fd);
		exit(100);
	}

	return (0);
}
