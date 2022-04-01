#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int ans = 1;

	if (argc < 3 || argc > 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ans *= atoi(argv[i]);
		}
		printf("%d\n", ans);
		return (0);
	}
}
