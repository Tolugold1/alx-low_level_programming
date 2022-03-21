#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_rev - Function to print string in reverse.
 * @s: string to print in reverse.
 * Return: Result.
 */

void print_rev(char *s)
{
	int i;
	int len;
	int t;
	char w;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		t = len - i - 1;
		w = s[t];
		_putchar(w);
	}
	_putchar('\n');
}
