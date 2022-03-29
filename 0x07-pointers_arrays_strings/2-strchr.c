#include "main.h"
#include <string.h>
/**
 * _strchr - Function that locates a character in a string
 * @s:  The string
 * @c: The character
 * Return: The result
 */

char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}
