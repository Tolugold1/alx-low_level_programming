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

	if ((Q % 10) == 0 && Q < 50)
	{
		ans += Q / 10;
	}
	else if ((Q % 10) != 0 && Q < 50)
	{
		ans +=  (Q / 10) + (Q % 10) - 1;
	}
	else if ((Q % 5) == 0 && Q < 20)
	{
		ans += Q / 5;
	}
	else if ((Q % 5) != 0 && Q < 20)
	{
		ans +=  (Q / 5) + (Q % 5) - 1;
	}
	else if ((Q % 2) == 0 && Q < 10)
	{
		ans += Q / 2;
	}
	else if ((Q % 1) == 0 && Q < 2)
	{
		ans += Q / 1;
	}
	else if ((Q % 25) == 0 && Q >= 25)
	{
		ans += Q / 25;
	}
	else if ((Q % 25) != 0 && Q >= 25)
	{
		ans += (Q / 25) + (Q % 25);
	}
	return (ans);
}
