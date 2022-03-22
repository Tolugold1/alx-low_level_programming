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

	len = strlen(str);
	half = (len - 1) / 2;
	for (i = half + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
