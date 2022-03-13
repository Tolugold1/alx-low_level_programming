#include <stdio.h>

/**
 * main - print digit less than 10
 *
 * Return: absolute 0 (success)
 */

int main(void)
{
	int i;

	do {
		putchar(i + '0');
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
