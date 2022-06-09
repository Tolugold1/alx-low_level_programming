#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - print string str to stdout
 * @str: string variable
 * Return: Result
 */

void _puts(char *str)
{
	write(1, str, strlen(str));
	_putchar('\n');
}
