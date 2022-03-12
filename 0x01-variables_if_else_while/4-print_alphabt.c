#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: absolute 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' && i == 'q')
		{
			i = '0';
		}
		putchar(i);
	}
		putchar('\n');
		return (0);
}
