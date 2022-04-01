#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: Always zero.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int ans = 0;

	for (i = 1; i < argc; i++)
	{
		if (test_positive(argv[i]))
		{
			ans += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%u\n", ans);
	return (0);
}


/**
 * test_positive - function to test for digit.
 * @num: string provided
 * Return: result.
 */

int test_positive(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
	}
	return (1);
}
