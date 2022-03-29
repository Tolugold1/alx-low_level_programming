#include "main.h"

/**
 * _strstr - Finction that locate a substring.
 * @haystack: The main string.
 * @needle: The substring.
 * Return: result.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len, len_s;
	char *k;

	len = 0;
	len_s = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; needle[j] != '\0'; j++)
	{
		len_s++;
	}

	for (i = 0; i < len; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = &haystack[i];
			for (j = 0; j < len_s; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					k = '\0';
					break;
				}
				if (j == len_s - 1)
				{
					i = len;
				}
			}
		}

	}
	return (k);
}
