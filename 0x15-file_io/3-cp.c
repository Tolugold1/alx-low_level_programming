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
		argtestErr();
	}
	fdFileFrom = open(argv[1], O_RDONLY);
	if (fdFileFrom == -1)
	{
		fdFileFromErr(argv[1]);
	}
	fdFileTo = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdFileTo == -1)
	{
		fdFileToErr(argv[2]);
	}
	while ((len = read(fdFileFrom, buf, 1024)) > 0)
	{
		if (write(fdFileTo, buf, len) != len)
		{
			fdFileToErr(argv[2]);
		}
	}
	if (len == -1)
	{
		fdFileFromErr(argv[1]);
	}
	c_close = close(fdFileFrom);
	if (c_close == -1)
	{
		closeErr(fdFileFrom);
	}
	c_close = close(fdFileTo);
	if (c_close == -1)
	{
		closeErr(fdFileTo);
	}
	return (0);
}

/**
 * argtestErr - error function for file_from
 *
 * Return: exit 97.
 */

void argtestErr(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * fdFileFromErr - error function for file_from
 * @s: argv[1] string.
 * Return: exit 98.
 */

void fdFileFromErr(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * fdFileToErr - error function for file_to
 * @s: argv[2] string.
 * Return: exit 99.
 */

void fdFileToErr(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * closeErr - error function for close syscall
 * @i: FD_VALUE
 * Return: exit 100.
 */

void closeErr(int i)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFileFrom);
	exit(100);
}
