#include "main.h"

/**
 * _strlen_recursion - Function to return length of a string.
 * @s: string
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int t;

	if (s[i] == '\0')
	{
		t = 0;
	}
	else
	{
		s++;
		i++;
		t = 1 + _strlen_recursion(s);
	}
	return (t);
}
