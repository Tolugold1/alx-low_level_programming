#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string;
 * @str: string to work with
 * Return: always 0.
 */

void puts_half(char *str)
{
	int len, i, half;
	char t;

	len = strlen(str);
	half = len / 2;
	for (i = 0; str[i]; i++)
	{
		t = str[len - half];
		_putchar(t);
		half -= 1;
		i++;
	}
	_putchar('\n');
	_putchar(t);
}
