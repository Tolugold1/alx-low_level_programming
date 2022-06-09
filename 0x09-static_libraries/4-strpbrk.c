#include "main.h"
#include <string.h>

/**
 * _strpbrk - Function that search a string for any od a set byte
 * @s: The main string
 * @accept: The second string to search for in main string.
 * Return: Pointer to the byte s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, len, len_s;

	len = strlen(s);
	len_s = strlen(accept);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len_s; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
