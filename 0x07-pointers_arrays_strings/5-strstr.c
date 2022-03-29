#include "main.h"

/**
 * _strstr - Finction that locate a substring.
 * @haystack: The main string.
 * @needle: The substring.
 * Return: result.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, len, len_s;

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

	k = len - len_s;

	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[k] == needle[j])
		{
			return (&needle[j]);
		}
		k++;
	}
	return (needle);
}
