#include "main.h"
#include <string.h>

/**
 * _strncat - Function to concatenate two string based a specific number.
 * @dest: first string
 * @src: second string
 * @n: Number to determine the rate concatenation.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len, len_dest;

	len = strlen(src);
	len_dest = strlen(dest);
	if (n > len)
	{
		n = len;
	}

	for (i = 0; i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
