#include "main.h"

/**
 * main - Entry point
 * @argc: Number of argumrnts
 * @argv: argument.
 * Return: result.
 */

int main(int argc, char *argv[])
{
	int fdFileFrom, fdFileTo, c_close;
	char buf[1024];
	ssize_t len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdFileFrom = open(argv[1], O_RDONLY);
	if (fdFileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdFileTo = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdFileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((len = read(fdFileFrom, buf, 1024)) > 0)
	{
		if (write(fdFileTo, buf, len) != len)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	c_close = close(fdFileFrom);
	if (c_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFileFrom);
		exit(100);
	}

	c_close = close(fdFileTo);
	if (c_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFileFrom);
		exit(100);
	}

	return (0);
}
