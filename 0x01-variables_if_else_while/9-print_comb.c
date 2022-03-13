#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: absolute 0 (seccess)
 */

int main(void)
{
	int i;

	do {
		for (i = 0; i < 10; i++)
		{
			putchar(i + '0');
			if (i != 9)
			{
				putchar(',');
			}
			putchar(' ');
		}
	} while (i < 10);
	return (0);
}
