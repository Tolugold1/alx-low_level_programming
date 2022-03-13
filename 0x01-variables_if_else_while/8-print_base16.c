#include <stdio.h>
/**
 * main - print number in lowerletter of base 16
 *
 * Return: aabsolute 0 (success)
 */

int main(void)
{
	int i;

	char n;

	do {
		putchar(i + '0');
		i++;
	} while (i < 10);

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
