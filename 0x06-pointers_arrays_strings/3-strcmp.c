#include "main.h"
#include <string.h>

/**
 * _strcmp - Function to compare two strings
 * @s1: first string.
 * @s2: Second dtring
 * Return: the results
 */

int _strcmp(char *s1, char *s2)
{
	int i, len;

	len = strlen(s1);

	for (i = 0; i < len; i++)
	{
		if (s1 != s2)
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
