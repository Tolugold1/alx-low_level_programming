#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 *  @str: string to work with.
 *  Return: always 0.
 */

void puts2(char *str)
{
	int i, len;
	char t;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		t = str[i];
		_putchar(t);
		_putchar('\n');
	}
}
