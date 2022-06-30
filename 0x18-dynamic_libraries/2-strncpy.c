#include "main.h"
#include <string.h>

/**
 * _strncpy - Function to copy string into another string.
 * @dest: First string.
 * @src: Second string.
 * @n: The determinant.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len, last;

	len = strlen(src);
	if (n > len)
	{
		last = len;
	}
	else
	{
		last = n;
	}

	for (i = 0; i < last; i++)
	{
		dest[i] = src[i];
	}

	if (n > len)
	{
		for (i = len; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
