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
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
