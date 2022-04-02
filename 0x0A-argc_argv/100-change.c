#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * @Q: value
 * Return: Always 0
 */
int division(int Q);

int main(int argc, char *argv[])
{
	int i;
	int Q;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			Q = division(atoi(argv[i]));
		}
		printf("%u\n", Q);
	}
	return (Q);
}

/**
 * division - function to calculate coin
 * @Q: number of coin
 * Return: value.
 */

int division(int Q)
{
	int ans = 0;

	ans += (Q / 25);
	Q %= 25;

	ans += (Q / 10);
	Q %= 10;

	ans += (Q / 5);
	Q %= 5;

	ans += (Q / 2);
	Q %= 2;

	ans += Q;
	return (ans);
}
